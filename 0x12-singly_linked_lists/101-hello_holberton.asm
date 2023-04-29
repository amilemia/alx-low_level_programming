section .data
	hello db "Hello, Holberton!", 0
	fmt db "%s\n", 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	; call printf with hello and fmt as arguments
	mov rdi, fmt
	mov rsi, hello
	xor rax, rax
	call printf

	; return 0
	mov eax, 0

	; clean up stack and exit
	leave
	ret
