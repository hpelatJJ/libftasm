section .text
	global	_ft_isupper

_ft_isupper:
	enter	0,		0
	cmp		rdi,	'A'
	jl		.not_upper
	cmp		rdi,	'Z'
	jg		.not_upper
	mov		rax,	1
	leave
	ret

.not_upper:
	mov		rax,	0
	leave
	ret