	.file	"bufdemo.c"
	.text
	.globl	_gets
	.def	_gets;	.scl	2;	.type	32;	.endef
_gets:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	%eax, -12(%ebp)
	jmp	L2
L4:
	movl	-12(%ebp), %eax
	leal	1(%eax), %edx
	movl	%edx, -12(%ebp)
	movl	-16(%ebp), %edx
	movb	%dl, (%eax)
L2:
	call	_getchar
	movl	%eax, -16(%ebp)
	cmpl	$10, -16(%ebp)
	je	L3
	cmpl	$-1, -16(%ebp)
	jne	L4
L3:
	cmpl	$-1, -16(%ebp)
	jne	L5
	movl	-12(%ebp), %eax
	cmpl	8(%ebp), %eax
	jne	L5
	movl	$0, %eax
	jmp	L6
L5:
	movl	-12(%ebp), %eax
	leal	1(%eax), %edx
	movl	%edx, -12(%ebp)
	movb	$0, (%eax)
	movl	8(%ebp), %eax
L6:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.globl	_echo
	.def	_echo;	.scl	2;	.type	32;	.endef
_echo:
LFB15:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	leal	-12(%ebp), %eax
	movl	%eax, (%esp)
	call	_gets
	leal	-12(%ebp), %eax
	movl	%eax, (%esp)
	call	_puts
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE15:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Type a string:\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB16:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$16, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	call	_echo
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE16:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_getchar;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
