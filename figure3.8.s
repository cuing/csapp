	.file	"figure3.8.c"
	.text
	.globl	arith
	.type	arith, @function
arith:
.LFB0:
	.cfi_startproc
	leal	(%rdx,%rdx,2), %eax
	sall	$4, %eax
	addl	%edi, %esi
	andl	$65535, %esi
	imull	%esi, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	arith, .-arith
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits

