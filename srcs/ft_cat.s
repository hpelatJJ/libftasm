%define MACH_SYSCALL(nb)	0x2000000 | nb
%define WRITE				4
%define READ				3
%define STDOUT				1
%define B_SIZE				4096

section	.bss
	buffer: resb		B_SIZE

section	.text
	global	_ft_cat

_ft_cat:
	enter	0,			0
	push	r12
	mov		r12,		rdi

.read:
	mov		rdi,		r12
	mov		rsi,		buffer
	mov		rdx,		B_SIZE
	mov		rax,		MACH_SYSCALL(READ)
	syscall
	jc		.ntd
	test	rax,		rax
	jle		.ntd
	mov		rdi,		STDOUT
	mov		rsi,		buffer
	mov		rdx,		rax
	mov		rax,		MACH_SYSCALL(WRITE)
	syscall
	loop	.read

.ntd:
	pop		r12
	leave
	ret