	.file	"pp3.16.c"
	.text
	.globl	cond
	.type	cond, @function
cond:
.LFB0:
	.cfi_startproc
	testq	%rsi, %rsi
	je	.L5
	testl	%edi, %edi
	jle	.L1
.L5:
	addl	%edi, (%rsi)
.L2:
.L4:
.L1:
	rep
	ret
	.cfi_endproc
.LFE0:
	.size	cond, .-cond
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
