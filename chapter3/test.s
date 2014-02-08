	.file	"test.c"
	.text
	.globl	simple_1
	.type	simple_1, @function
simple_1:
.LFB0:
	.cfi_startproc
	movq	%rsi, r%papx
	addq	(%rdi), %rax
	movq	%rax, (%rdi)
	ret
	.cfi_endproc
.LFE0:
	.size	simple_1, .-simple_1
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
