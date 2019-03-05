section	.text
	global	_ft_memchr

_ft_memchr:
	enter	0,			0
	mov		rax,		rsi
	mov		rcx,		rdx
	cld
	repne	scasb
	je		.not_found
	mov		rax,		0
	leave
	ret

.not_found:
	mov		rax,		0
	dec		rdi
	mov		rax,			rdi
	leave
	ret