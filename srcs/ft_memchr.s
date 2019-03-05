section	.text
	global	_ft_memchr

_ft_memchr:
	enter	0,			0
	mov		rax,		rsi
	mov		rcx,		rdx
	cld
	repne	scasb
	je		.found
	mov		rax,		0
	leave
	ret

.found:
	mov		rax,		0
	dec		rdi
	mov		rax,		rdi
	leave
	ret