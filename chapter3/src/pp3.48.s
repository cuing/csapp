	.file	"pp3.48.c"
	.text
	.globl	arithprob
	.type	arithprob, @function
arithprob:
.LFB0:
	.cfi_startproc
	movsbl	%sil, %eax
	imull	%edi, %eax
	cltq
	movslq	%ecx, %rcx
	imulq	%rcx, %rdx
	addq	%rdx, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	arithprob, .-arithprob
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
