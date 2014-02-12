	.file	"pp4.3.c"
	.text
	.globl	rSum
	.type	rSum, @function
rSum:
.LFB0:
	.cfi_startproc
	movl	$0, %eax
	testl	%esi, %esi
	jle	.L6
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movq	%rdi, %rbx    ""
	subl	$1, %esi
	leaq	4(%rdi), %rdi    "int have 4 byte"
	call	rSum
	addl	(%rbx), %eax
	popq	%rbx
	.cfi_restore 3
	.cfi_def_cfa_offset 8
.L6:
	rep
	ret
	.cfi_endproc
.LFE0:
	.size	rSum, .-rSum
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
