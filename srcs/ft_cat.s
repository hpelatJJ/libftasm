%define MACH_SYSCALL(nb)	0x2000000 | nb
%define WRITE				4
%define READ				3
%define STDOUT				1
%define B_SIZE				4096

section	.text
	global	_ft_cat

_ft_cat:
	enter	B_SIZE,		0
	mov		r12,		rdi

.read:
	mov		rdi,		r12
	mov		rsi,		rsp
	mov		rdx,		B_SIZE
	mov		rax,		MACH_SYSCALL(READ)
	syscall
	jc		.ntd
	test	rax,		rax
	jle		.ntd
	mov		rdi,		STDOUT
	mov		rsi,		rsp
	mov		rdx,		rax
	mov		rax,		MACH_SYSCALL(WRITE)
	syscall
	loop	.read

.ntd:
	leave
	ret