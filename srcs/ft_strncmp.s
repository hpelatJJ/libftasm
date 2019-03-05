section	.text
	global	_ft_strncmp

_ft_strncmp:
	enter	0,			0
	push	r12
	mov		rcx,		rdx
	cld
	repe	cmpsb
	dec		rdi
	dec		rsi
	mov		rax,		0
	mov		al,			byte[rdi]
	mov		r12b,		byte[rsi]
	sub		rax,		r12
	pop		r12
	leave
	ret