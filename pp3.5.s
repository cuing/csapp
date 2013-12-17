	.file	"pp3.5.c"
	.text
	.globl	decode1
	.type	decode1, @function
decode1:
.LFB0:
	.cfi_startproc
	movl	(%rdi), %r8d
	movl	(%rsi), %ecx
	movl	(%rdx), %eax
	movl	%r8d, (%rsi)
	movl	%ecx, (%rdx)
	movl	%eax, (%rdi)
	ret
	.cfi_endproc
.LFE0:
	.size	decode1, .-decode1
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
