section .text
	global	_ft_isascii

_ft_isascii:
	enter	0,		0
	cmp		rdi, 	0
	jl		.not_ascii
	cmp		rdi, 	127
	jg		.not_ascii
	mov		rax,	1
	leave
	ret

.not_ascii:
	mov		rax,	0
	leave
	ret