int loop_while(int a, int b) {
	int result = 1;
	while (a < b) {
		result *= (a + b);
		a++;
	}
	return result;
}

/*
Register usage

Register    Varibale    Initially
%ecx        a           a
%ebx        b           b
%edx        (a+b)       (a+b)
%eax        result      1

Annotate
a at %ebp+8, b at %ebp+12
    movl    8(%ebp), %ecx        // get a
    movl    12(%ebp), %ebx       // get b
    movl    $1, %eax             // set result = 1
    cmpl    %ebx, %ecx           // compare a:b
    jge     .L11                 // if >=, goto L11
    leal    (%ebx, %ecx), %edx   // set %edx = (a + b)
    movl    $1, %eax             // set result = 1;
.L12:                            // loop
    imull   %edx, %eax           // result *= (a + b)
    addl    $1, %ecx             // a += 1
    addl    $1, %edx             // a + b + 1
    cmpl    %ecx, %ebx           // compare b:a  
    jg      .L12                 // if >, goto L12
.L11:
 
int loop_while_goto(int a, int b) {
	int result = 1;
	if (a >= b) {
	    goto done;
	}
	loop:
	    result *= (a + b);
	    a++;
	    if (a < b) {
	        goto loop;
	    }

	done:
	    return result;
}

*/

