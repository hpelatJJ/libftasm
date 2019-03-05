%define MACH_SYSCALL(nb)	0x2000000 | nb
%define WRITE				4
%define STDOUT				1

section .data
	nstr:
		.str db "(null)", 10
		.len equ $ - nstr.str

section .text
	global	_ft_puts
	extern	_ft_strlen

_ft_puts:
	enter	16,			0
	test	rdi,		rdi
	jz		.put_nstr
	cmp		byte[rdi],	0
	je		.put_endl
	mov		r11,		rdi
	call	_ft_strlen
	mov		rdi,		r11
	mov		rsi,		rdi
	mov		rdi,		STDOUT
	mov		rdx,		rax
	mov		rax,		MACH_SYSCALL(WRITE)
	syscall

.put_endl:
	mov		rdi,		STDOUT
	lea		rsi,		[rel nstr.str + 6]
	mov		rdx,		1
	mov		rax,		MACH_SYSCALL(WRITE)
	syscall
	leave
	ret

.put_nstr:
	mov		rdi,		STDOUT
	lea		rsi,		[rel nstr.str]
	mov		rdx,		nstr.len
	mov		rax,		MACH_SYSCALL(WRITE)
	syscall
	leave
	ret