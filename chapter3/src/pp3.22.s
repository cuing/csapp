	.file	"pp3.22.c"
	.text
	.globl	fun_a
	.type	fun_a, @function
fun_a:
.LFB0:
	.cfi_startproc
	testl	%edi, %edi
	je	.L4
	movl	$0, %eax
.L3:
	xorl	%edi, %eax
	shrl	%edi
	jne	.L3
	jmp	.L2
.L4:
	movl	$0, %eax
.L2:
	andl	$1, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	fun_a, .-fun_a
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
