section	.text
	global	_ft_strlen

_ft_strlen:
	enter	0,			0
	mov		r10,		rdi
	mov		al,			0
	mov		rcx,		-1
	cld
	repne	scasb
	sub		rdi,		r10
	dec		rdi
	mov		rax,		rdi
	leave
	ret