	.file	"shift.c"
	.text
	.globl	shift_left2_rightn
	.type	shift_left2_rightn, @function
shift_left2_rightn:
.LFB0:
	.cfi_startproc
	leal	0(,%rdi,4), %eax
	movl	%esi, %ecx
	sarl	%cl, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	shift_left2_rightn, .-shift_left2_rightn
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
