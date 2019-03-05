section .text
	global	_ft_islower

_ft_islower:
	enter	0,		0
	cmp		rdi,	'a'
	jl		.not_lower
	cmp		rdi,	'z'
	jg		.not_lower
	mov		rax,	1
	leave
	ret

.not_lower:
	mov		rax,	0
	leave
	ret