	.file	"pp3.29.c"
	.text
	.globl	switcher
	.type	switcher, @function
switcher:
.LFB0:
	.cfi_startproc
	cmpl	$2, %edi
	je	.L4
	movl	$4, %eax
	cmpl	$4, %edi
	je	.L2
	leal	112(%rdx), %eax
	testl	%edi, %edi
	cmovne	%esi, %eax
	ret
.L4:
	addl	%edx, %esi
	leal	3(%rsi), %eax
	testl	%esi, %esi
	cmovns	%esi, %eax
	sarl	$2, %eax
.L2:
	rep
	ret
	.cfi_endproc
.LFE0:
	.size	switcher, .-switcher
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
