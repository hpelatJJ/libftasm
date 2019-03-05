section	.text
	global	_ft_memcpy

_ft_memcpy:
	enter	0,			0
	mov		rcx,		rdx
	cld
	rep		movsb
	leave
	ret