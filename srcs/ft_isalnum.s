section .text
	global	_ft_isalnum
	extern	_ft_isalpha
	extern	_ft_isdigit

_ft_isalnum:
	enter	0,		0
	call	_ft_isalpha
	cmp		rax,	0
	je		.not_alnum
	call	_ft_isdigit
	cmp		rax,	0
	je		.not_alnum
	mov		rax,	1
	leave
	ret

.not_alnum:
	mov		rax,	0
	leave
	ret