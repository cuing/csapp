	.file	"pp3.33.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%x %x"
	.text
	.globl	proc
	.type	proc, @function
proc:
.LFB0:
	.cfi_startproc
	subq	$24, %rsp
	.cfi_def_cfa_offset 32
	leaq	8(%rsp), %rdx
	leaq	12(%rsp), %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	scanf
	movl	8(%rsp), %eax
	subl	12(%rsp), %eax
	addq	$24, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE0:
	.size	proc, .-proc
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
