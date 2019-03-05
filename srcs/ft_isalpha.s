section .text
	global	_ft_isalpha

_ft_isalpha:
	enter	0,		0
	cmp		rdi,	'A'
	jl		.not_alpha
	cmp		rdi,	'Z'
	jle		.alpha
	cmp		rdi,	'a'
	jl		.not_alpha
	cmp		rdi,	'z'
	jg		.not_alpha

.alpha:
	mov		rax,	1
	leave
	ret

.not_alpha:
	mov		rax,	0
	leave
	ret