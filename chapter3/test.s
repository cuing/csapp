	.file	"test.c"
	.text
	.globl	fact_for
	.type	fact_for, @function
fact_for:
.LFB0:
	.cfi_startproc
	cmpl	$1, %edi
	jle	.L4
	movl	$1, %eax
	movl	$2, %edx
.L3:
	imull	%edx, %eax
	addl	$1, %edx
	cmpl	%edx, %edi
	jge	.L3
	rep
	ret
.L4:
	movl	$1, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	fact_for, .-fact_for
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
