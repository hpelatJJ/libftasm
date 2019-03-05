section	.text
	global	_ft_strcmp
	extern	_ft_strlen

_ft_strcmp:
	enter	0,			0
	push	r13
	push	r12
	push	rdi
	call	_ft_strlen
	mov		r13,		rax
	push	rsi
	mov		rdi,		rsi
	call	_ft_strlen
	pop		rsi
	pop		rdi
	cmp		r13,		rax
	jle		.ntd
	mov		rax,		r13

.ntd:
	mov		rcx,		rax
	cld
	repe	cmpsb
	dec		rdi
	dec		rsi
	mov		rax,		0
	mov		al,			byte[rdi]
	mov		r12b,		byte[rsi]
	sub		rax,		r12
	pop		r12
	pop		r13
	leave
	ret