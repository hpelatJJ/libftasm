section .text
	global	_ft_islower

_ft_islower:
	enter	0,		0
	cmp		rdi,	'a'
	jl		.not_alpha
	cmp		rdi,	'z'
	mov		rax,	1
	leave
	ret

.not_alpha:
	mov		rax,	0
	leave
	ret