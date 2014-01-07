	.file	"pp3.27.c"
	.text
	.globl	test
	.type	test, @function
test:
.LFB0:
	.cfi_startproc
	testl	%esi, %esi
	jle	.L2
	movl	%edi, %eax
	subl	%esi, %eax
	movl	%esi, %edx
	xorl	%edi, %edx
	cmpl	%esi, %edi
	cmovge	%edx, %eax
	ret
.L2:
	leal	0(,%rdi,4), %eax
	addl	%esi, %edi
	cmpl	$-2, %esi
	cmovl	%edi, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	test, .-test
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
