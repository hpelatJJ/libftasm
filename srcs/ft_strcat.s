section	.text
	global	_ft_strcat

_ft_strcat:
	enter	0,			0
	mov		rdx,		rdi
	mov		rcx,		rsi
	
.loop:
	cmp		byte[rdx],		0
	je		.concat
	inc		rdx
	jmp	.loop

.concat:
	mov		r11b,		byte[rcx]
	mov		byte[rdx],	r11b
	inc		rdx
	inc		rcx
	cmp		byte[rcx],	0
	jne		.concat
	mov		byte[rdx],	0
	mov		rax,	rdi
	leave
	ret