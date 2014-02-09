	.file	"pp3.18.c"
	.text
	.globl	test
	.type	test, @function
test:
.LFB0:
	.cfi_startproc
	movl	%edi, %eax
	subl	%esi, %eax
	cmpl	$2, %edi
	jg	.L4
	leal	(%rdi,%rsi), %eax
	movl	%edi, %edx
	imull	%esi, %edx
	cmpl	%esi, %edi
	cmovg	%edx, %eax
.L4:
	rep
	ret
	.cfi_endproc
.LFE0:
	.size	test, .-test
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
