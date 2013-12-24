	.file	"pp3.17.c"
	.text
	.globl	absdiff
	.type	absdiff, @function
absdiff:
.LFB0:
	.cfi_startproc
	movl	%edi, %eax
	subl	%esi, %eax
	subl	%edi, %esi
	testl	%eax, %eax
	cmovns	%esi, %eax
.L3:
.L2:
	ret
	.cfi_endproc
.LFE0:
	.size	absdiff, .-absdiff
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
