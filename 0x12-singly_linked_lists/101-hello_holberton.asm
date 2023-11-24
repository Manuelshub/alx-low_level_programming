section .data
    hello_message db "Hello, Holberton", 0
	hello_format db "%s", 10, 0

section .text
	global main				; the gcc entry point
	extern printf			; the c function to be called

main:						; standard gcc entry point
    sub rsp, 8            ; Align the stack

    mov rdi, hello_format
	mov rsi, hello_message
    xor rax, rax          ; Clear RAX register (no vector registers used)
    call printf

    add rsp, 8            ; Restore the stack
    ret
