section .data
	hello db 'Hello, Holberton', 0Ah

section .text
	global main
	extern printf

main:
	push	rbp
	mov	rbp,	rsp
	mov	rdi,	hello
	mov	rax,	0
	call	printf
	mov	rax,	0
	pop	rbp
	ret
