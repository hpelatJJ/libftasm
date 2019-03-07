section	.text
	global	_ft_strdup
	extern	_ft_strlen
	extern	_ft_memcpy
	extern	_malloc

_ft_strdup:
	enter	0,			0
	push	rdi
	call	_ft_strlen
	mov		rdx,		rax
	push	rdx
	mov		rdi,		rax
	call	_malloc
	test	rax,		rax
	je		.malloc_failed
	mov		rdi,		rax
	pop		rdx
	pop		rsi
	call	_ft_memcpy
	mov		byte[rdi],	0
	leave
	ret

.malloc_failed:
	mov		rax,		0
	leave
	ret