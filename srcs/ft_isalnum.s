section .text
	global	_ft_isalnum
	extern	_ft_isalpha
	extern	_ft_isdigit

_ft_isalnum:
	enter	0,		0
	call	_ft_isalpha
	cmp		rax,	1
	je		.alnum
	call	_ft_isdigit
	cmp		rax,	1
	je		.alnum
	leave
	ret

.alnum:
	leave
	ret