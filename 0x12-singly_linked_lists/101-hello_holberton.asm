global main
extern printf

section .data
    hello_message db "Hello, Holberton", 10

section .text
main:
    sub rsp, 8            ; Align the stack

    mov rdi, hello_message
    xor rax, rax          ; Clear RAX register (no vector registers used)
    call printf

    add rsp, 8            ; Restore the stack
    ret

