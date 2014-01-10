// Given the C function

int proc(void) {
	int x, y;
	scanf("%x %x", &y, &x);
	return x - y;
}

// GCC generates the following assembly code:
/*
proc:
    push1    %ebp				压栈
    movl     %esp, %ebp         %esp指针赋值给%ebp
    subl     $40, %esp          滕出空间
    leal     -4(%ebp), %eax     参数x，
    movl     %eax, 8(%esp)      
    leal     -8(%ebp), %eax     参数y 
    movl     %eax, 4(%esp)
    movl     $.LCO, (%esp)      
    call     scanf
   Diagram stack frame at this point
    movl     -4(%ebp), %eax
    subl     -8(%ebp), %eax
    leave
    ret
*/


/*
solutions:
    A: 0x80003c
    B: 0x800014
    C: x 0x800038, y 0x800034

*/