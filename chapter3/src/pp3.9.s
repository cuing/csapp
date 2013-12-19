	.file	"pp3.9.c"
	.text
	.globl	arith
	.type	arith, @function
arith:
.LFB0:
	.cfi_startproc
	xorl	%edi, %esi
	leal	7(%rsi), %eax
	testl	%esi, %esi
	cmovns	%esi, %eax
	sarl	$3, %eax
	notl	%eax
	subl	%edx, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	arith, .-arith
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
