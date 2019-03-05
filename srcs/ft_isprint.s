section .text
	global	_ft_isprint

_ft_isprint:
	enter	0,		0
	cmp		rdi, 	31
	jle		.not_print
	cmp		rdi, 	127
	jge		.not_print
	mov		rax,	1
	leave
	ret

.not_print:
	mov		rax,	0
	leave
	ret