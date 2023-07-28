SECTION .data
msg:	db "Hello, Holberton", 0	; string termination(null)
fmt:	db "%s", 10, 0

Section .text
extern printf	;from the standard library
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	push rbp
	call printf

	mov eax, 0
	ret
