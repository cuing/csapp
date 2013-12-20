	.file	"test.c"
	.text
	.globl	compare
	.type	compare, @function
compare:
.LFB0:
	.cfi_startproc
	cmpl	%esi, %edi
	jg	.L3
	jl	.L4
	rep
	ret
.L3:
	movl	$0, %eax
	.p2align 4,,6
	ret
.L4:
	movl	$1, %eax
	.p2align 4,,2
	ret
	.cfi_endproc
.LFE0:
	.size	compare, .-compare
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
