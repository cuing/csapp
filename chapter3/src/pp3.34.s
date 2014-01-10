	.file	"pp3.34.c"
	.text
	.globl	rfun
	.type	rfun, @function
rfun:
.LFB0:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movl	%edi, %ebx
	movl	$0, %eax
	testl	%edi, %edi
	je	.L2
	shrl	%edi
	call	rfun
	andl	$1, %ebx
	addl	%ebx, %eax
.L2:
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE0:
	.size	rfun, .-rfun
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
