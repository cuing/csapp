	.file	"testcmp.c"
	.text
	.globl	gotodiff
	.type	gotodiff, @function
gotodiff:
.LFB0:
	.cfi_startproc
	movl	%esi, %eax
	subl	%edi, %eax
	movl	%edi, %edx
	subl	%esi, %edx
	cmpl	%esi, %edi
	cmovge	%edx, %eax
.L2:
.L3:
	ret
	.cfi_endproc
.LFE0:
	.size	gotodiff, .-gotodiff
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
