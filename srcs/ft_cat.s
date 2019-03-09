%define MACH_SYSCALL(nb)	0x2000000 | nb
%define WRITE				4
%define READ				3
%define STDOUT				1
%define B_SIZE				4096

section .bss
	buffer: resb		B_SIZE

section	.text
	global	_ft_cat

_ft_cat:
	enter	16,			0
	mov		rsp,		r12
	mov		r12,		rdi

.read:
	mov		rdi,		r12
	lea		rsi,		[rel buffer]
	mov		rdx,		B_SIZE
	mov		rax,		MACH_SYSCALL(READ)
	syscall
	jc		.ntd
	test	rax,		rax
	jle		.ntd
	mov		rdi,		STDOUT
	lea		rsi,		[rel buffer]
	mov		rdx,		rax
	mov		rax,		MACH_SYSCALL(WRITE)
	syscall
	loop	.read

.ntd:
	mov		r12,		rsp
	leave
	ret