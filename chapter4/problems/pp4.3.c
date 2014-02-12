/*
Write Y86 code to implement a recursive sum function rSum, based on the following C code:
*/

int rSum(int *Start, int Count) {
	if (Count <= 0)
		return 0;
    return *Start + rSum(Start+1, Count-1);
}

/*
# int Sum(int *Start, int Count)
rSum:
    push1 %ebp
	rrmovl   %esp, %ebp
	pushl    %ebx              # Save value of %ebx
	mrmovl   8(%ebp), %ebx     # Get Start
	mrmovl   12(%ebp), %eax    # Get Count
	andl     %eax, %eagx        # Test value of Count
	jle      L38               # If <= 0, goto zreturn
	irmovl   $-1, %edx
	addl     %edx, %eax        # Count--
	pushl    %eax              # Push Count
	irmovl   $4,%edx
	rrmovl   %ebx,%eax
	addl     %edx,%eax
	pushl    %eax              # Push Start+1
	call rSum                  # Sum(Start+1, Count-1)
	mrmovl (%ebx),%edx
	addl %edx,%eax             # Add *Start
	jmp L39                    # goto done

L38:
    xorl     %eax, %eax        # zreturn:
    mrmovl   -4(%ebp), %ebx    # done: Restore %ebx
    rrmovl   %ebp, %esp        # Deallocate stack frame
    popl     %ebp              # Restore %ebp
    ret
*/