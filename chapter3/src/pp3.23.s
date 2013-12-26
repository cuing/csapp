	.file	"pp3.23.c"
	.text
	.globl	fun_b
	.type	fun_b, @function
fun_b:
.LFB0:
	.cfi_startproc
	movl	$32, %edx
	movl	$0, %eax
.L2:
	movl	%edi, %ecx
	andl	$1, %ecx
	addl	%eax, %eax
	orl	%ecx, %eax
	shrl	%edi
	subl	$1, %edx
	jne	.L2
	rep
	ret
	.cfi_endproc
.LFE0:
	.size	fun_b, .-fun_b
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
