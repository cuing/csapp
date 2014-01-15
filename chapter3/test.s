	.file	"test.c"
	.text
	.globl	var_prod_ele
	.type	var_prod_ele, @function
var_prod_ele:
.LFB0:
	.cfi_startproc
	testl	%edi, %edi
	jle	.L4
	movslq	%edi, %r9
	salq	$2, %r9
	movslq	%ecx, %rcx
	imulq	%r9, %rcx
	addq	%rcx, %rsi
	movslq	%r8d, %r8
	leaq	(%rdx,%r8,4), %rcx
	movl	$0, %edx
	movl	$0, %eax
.L3:
	movl	(%rsi,%rdx,4), %r8d
	imull	(%rcx), %r8d
	addl	%r8d, %eax
	addq	$1, %rdx
	addq	%r9, %rcx
	cmpl	%edx, %edi
	jg	.L3
	rep
	ret
.L4:
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	var_prod_ele, .-var_prod_ele
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
