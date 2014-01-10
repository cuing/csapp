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

