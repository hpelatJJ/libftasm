section .text
	global	_ft_isdigit

_ft_isdigit:
	enter	0,		0
	cmp		rdi, 	'0'
	jl		.not_digit
	cmp		rdi, 	'9'
	jg		.not_digit
	mov		rax,	1
	leave
	ret

.not_digit:
	mov		rax,	0
	leave
	ret