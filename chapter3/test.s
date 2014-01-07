	.file	"test.c"
	.text
	.globl	absdiff
	.type	absdiff, @function
absdiff:
.LFB0:
	.cfi_startproc
	movl	%esi, %eax
	subl	%edi, %eax
	movl	%edi, %edx
	subl	%esi, %edx
	cmpl	%esi, %edi
	cmovge	%edx, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	absdiff, .-absdiff
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
