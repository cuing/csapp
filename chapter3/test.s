	.file	"test.c"
	.text
	.globl	fact_while
	.type	fact_while, @function
fact_while:
.LFB0:
	.cfi_startproc
	cmpl	$1, %edi
	jle	.L4
	movl	$1, %eax
.L3:
	imull	%edi, %eax
	subl	$1, %edi
	cmpl	$1, %edi
	jne	.L3
	rep
	ret
.L4:
	movl	$1, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	fact_while, .-fact_while
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
