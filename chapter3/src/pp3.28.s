	.file	"pp3.28.c"
	.text
	.globl	switch2
	.type	switch2, @function
switch2:
.LFB0:
	.cfi_startproc
	addl	$2, %edi
	cmpl	$6, %edi
	ja	.L2
	movl	%edi, %edi
	jmp	*.L8(,%rdi,8)
	.section	.rodata
	.align 8
	.align 4
.L8:
	.quad	.L3
	.quad	.L9
	.quad	.L2
	.quad	.L5
	.quad	.L5
	.quad	.L6
	.quad	.L7
	.text
.L3:
	movl	$1, %eax
	ret
.L5:
	movl	$4, %eax
	ret
.L6:
	movl	$4, %eax
	ret
.L7:
	movl	$4, %eax
	ret
.L2:
	movl	$9, %eax
	ret
.L9:
	movl	$2, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	switch2, .-switch2
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
