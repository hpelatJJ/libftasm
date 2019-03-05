section .text
	global	_ft_isupper

_ft_isupper:
	enter	0,		0
	cmp		rdi,	'A'
	jl		.not_alpha
	cmp		rdi,	'Z'
	mov		rax,	1
	leave
	ret

.not_alpha:
	mov		rax,	0
	leave
	ret