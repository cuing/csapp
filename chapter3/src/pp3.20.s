	.file	"pp3.20.c"
	.text
	.globl	dw_loop
	.type	dw_loop, @function
dw_loop:
.LFB0:
	.cfi_startproc
.L2:
	imull	%edx, %esi
	subl	$1, %edx
	cmpl	%edx, %esi
	jge	.L4
	testl	%edx, %edx
	jg	.L2
.L4:
	rep
	ret
	.cfi_endproc
.LFE0:
	.size	dw_loop, .-dw_loop
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
