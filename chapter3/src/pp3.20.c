int dw_loop(int x, int y, int n) {
	do
	{
		x += n;
		y *= n;
		n--;
	} while ((n > 0) && (y < n));
}

/*// x at %ebp+8, y at %ebp+12, n at %ebp+16
// x in %eax, y in %ecx, n in %edx
	movl    8(%ebp), %eax    // get x
	movl    12(%ebp), %ecx   // get y
	movl    16(%ebp), %edx   // get n
.L2:
    addl    %edx, %eax    // compute x += n
    imull   %edx, %ecx    // compute y *= n
    subl    $1, %edx      // Decrement n
    testl   %edx, %edx    // compare n > 0
    jle     .L5
    cmpl    %edx, %ecx    // compare y < n
    jl      .L2
.L5:

Register    Variable    Initially
%eax        x           x
%ecx        y           y
%edx        n           n


*/