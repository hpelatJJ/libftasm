section .text
	global	_ft_tolower

_ft_tolower:
	enter	0,		0
	cmp		rdi,	'A'
	jl		.ntd
	cmp		rdi,	'Z'
	jg		.ntd
	add		rdi,	32
	mov		rax,	rdi
	leave
	ret

.ntd:
	mov		rax,	rdi
	leave
	ret