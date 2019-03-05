section	.text
	global	_ft_strcat

_ft_strcat:
	enter	0,			0
	
.loop:
	cmp		byte[rdi],	0
	je		.concat
	inc		rdi
	loop	.loop

.concat:
	mov		r11b,		byte[rsi]
	mov		byte[rdi],	r11b
	cmp		byte[rsi],	0
	je		.ntd
	inc		rdi
	inc		rsi
	loop	.concat

.ntd:
	leave
	ret