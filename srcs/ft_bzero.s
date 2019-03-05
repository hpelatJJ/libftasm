section	.text
	global	_ft_bzero

_ft_bzero:
	enter	0,		0
	cmp		rsi,	0
	je		.ntd		
	mov		rcx,	rsi

.loop:
	mov		byte[rdi],	0
	inc		rdi
	loop	.loop

.ntd:
	leave
	ret