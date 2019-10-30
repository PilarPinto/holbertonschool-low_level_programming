  section .data
	fmt     db "%s", 10, 0
	msg1    db "Hello, Holberton",0

	    section .text
	    extern printf
	    global main

main:
	    mov rax, 0
	    mov rdi, fmt
	    mov rsi, msg1
	    call printf

	    mov  ebx, 0
	    mov  eax, 1
	    int  0x80
