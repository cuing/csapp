	.file	"test.c"
	.text
	.globl	ps
	.type	ps, @function
ps:
.LFB0:
	.cfi_startproc
	movl	4, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	ps, .-ps
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
