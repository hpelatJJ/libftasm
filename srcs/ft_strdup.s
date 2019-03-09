section	.text
	global	_ft_strdup
	extern	_ft_strlen
	extern	_ft_memcpy
	extern	_malloc

_ft_strdup:
	enter	16,			0
	mov		[rsp],		rdi
	call	_ft_strlen
	inc		rax
	mov		rdx,		rax
	mov		[rsp + 8],	rdx
	mov		rdi,		rax
	call	_malloc
	test	rax,		rax
	je		.malloc_failed
	mov		rdi,		rax
	mov		rdx,		[rsp + 8]
	mov		rsi,		[rsp]
	call	_ft_memcpy
	mov		byte[rdi],	0
	leave
	ret

.malloc_failed:
	mov		rax,		0
	leave
	ret
