section	.text
	global	_ft_strncmp

_ft_strncmp:
	enter	16,			0
	mov		[rsp],		r12
	mov		rcx,		rdx
	cld
	repe	cmpsb
	dec		rdi
	dec		rsi
	mov		rax,		0
	mov		al,			byte[rdi]
	mov		r12b,		byte[rsi]
	sub		rax,		r12
	mov		r12,		[rsp]
	leave
	ret