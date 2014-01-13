int rfun(unsigned x) {
	if (x == 0) {
		return 0;
	}
	unsigned nx = x >> 1;
	int rv = rfun(nx);
	return (x & 0x1) + rv;
}


/*
    movl    8(%ebp), %ebx
    movl    $0, %eax
    test1   %ebx, %ebx
    je      .L3

    movl    %ebx, %eax
    shrl    %eax
    movl    %eax, (%esp)
    call    rfun
    movl    %ebx, %edx
    andl    $1, %edx
    leal    (%edx, %eax), %eax
*/

/*
A. Register %ebx holds the value of parameter x, so that it can be used to compute the result
expression.

C. This function computes the sum of the bits in argument x. It recursively computes the sum of
   all but the least significant bit, and then it adds the least significant bit to get the
   result. 


*/