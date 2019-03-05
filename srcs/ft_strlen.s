section	.text
	global	_ft_strlen

_ft_strlen:
	enter	0,			0
	push	r12
	mov		r12,		rdi
	mov		rax,		0
	mov		rcx,		-1
	cld
	repne	scasb
	dec		rdi
	sub		rdi,		r12
	mov		rax,		rdi
	pop		r12
	leave
	ret