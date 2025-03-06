#include "main.h"

char *elf_e_type(Elf64_Ehdr *elf)
{
    char *type;

    switch (elf->e_type)
    {
        case ET_NONE:
            type = "NONE (unknown type)";
            return (type);
        case ET_REL:
            type = "REL (Relocatable file)";
            return (type);
        case ET_EXEC:
            type = "EXEC (Executable file)";
            return (type);
        case ET_DYN:
            type = "DYN (Shared object file)";
            return (type);
        case ET_CORE:
            type = "CORE (Core file)";
            return (type);
        default:
            type = "<unknown>";
    }
    return (type);
}

/**
 * elf_header - display info from the ELF header.
 * @elf: pointer to the ELF header structure.
 */
void elf_header(Elf64_Ehdr *elf)
{
	int l;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (l = 0; l < EI_NIDENT; l++)
		printf("%02x ", elf->e_ident[l]);
	putchar('\n');
	printf("  Class:                             ELF%d\n",
			elf->e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("  Data:                              %s\n",
			elf->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			elf->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
			elf->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"<unknown>" : "UNIX - GNU");
	printf("  ABI Version:                       %d\n",
			elf->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			elf_e_type(elf));
	printf("  Entry point address:               0x%x\n",
			(unsigned int)elf->e_entry);
}

/**
 * error_message - prints an error message to stderr
 * @err_num: the exit code.
 * @message: error message.
 */
void error_message(int err_num, char *message)
{
	dprintf(2, "%s\n", message);
	exit(err_num);
}

/**
 * main - Entry point.
 * @ac: argument count.
 * @av: argument vector.
 * Return: 0 on success, or 98 on failure.
 */
int main(int ac, char *av[])
{
	int fd;
	off_t rep;
	Elf64_Ehdr header;

	if (ac != 2)
		error_message(98, "Usage: elf_header elf_filename");
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		error_message(98, "Error: Can't open file");
	rep = lseek(fd, 0, SEEK_SET);
	if (rep == -1)
	{
		close(fd);
		error_message(98, "Can't seek to the start of the file");
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		close(fd);
		error_message(98, "Error: Can't read Elf header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		error_message(98, "Error: Not an Elf file");
	}
	elf_header(&header);
	close(fd);
	return (0);
}
