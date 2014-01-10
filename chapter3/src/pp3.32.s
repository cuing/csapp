	.file	"pp3.32.c"
	.text
	.globl	fun
	.type	fun, @function
fun:
.LFB0:
	.cfi_startproc
	movsbl	%dl, %edx
	movl	%edx, (%rcx)
	movswl	%di, %edi
	movl	%esi, %eax
	subl	%edi, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	fun, .-fun
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
