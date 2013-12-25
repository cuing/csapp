	.file	"pp3.21.c"
	.text
	.globl	loop_while
	.type	loop_while, @function
loop_while:
.LFB0:
	.cfi_startproc
	cmpl	%esi, %edi
	jge	.L4
	addl	%esi, %edi
	addl	%esi, %esi
	movl	$1, %eax
.L3:
	imull	%edi, %eax
	addl	$1, %edi
	cmpl	%esi, %edi
	jne	.L3
	rep
	ret
.L4:
	movl	$1, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	loop_while, .-loop_while
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
