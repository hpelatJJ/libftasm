section .text
	global	_ft_toupper

_ft_toupper:
	enter	0,		0
	cmp		rdi,	'a'
	jl		.ntd
	cmp		rdi,	'z'
	jg		.ntd
	sub		rdi,	32
	mov		rax,	rdi
	leave
	ret

.ntd:
	mov		rax,	rdi
	leave
	ret