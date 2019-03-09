section	.text
	global	_ft_strcmp
	extern	_ft_strlen

_ft_strcmp:
	enter	32,			0
	mov		[rsp],		r13
	mov		[rsp + 8],	r12
	mov		[rsp + 16],	rdi
	call	_ft_strlen
	mov		r13,		rax
	mov		[rsp + 24],	rsi
	mov		rdi,		rsi
	call	_ft_strlen
	mov		rsi,		[rsp + 24]
	mov		rdi,		[rsp + 16]
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
	mov		r12,		[rsp + 8]
	mov		r13,		[rsp]
	leave
	ret