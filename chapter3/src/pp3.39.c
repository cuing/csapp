// Consider the following structure declaration:

struct prob
{
	int *p;
	struct 
	{
		int x;
		int y;
	} s;

	struct prob *next;
};

void sp_init(struct prob *sp) {
	sp -> s.x = sp -> s.y;
    sp -> p = &(sp -> s.x);
    sp -> next = sp;
}


/*
    A. What are the offsets (in bytes) of the following fields?
    p: 4;
    s.x: 4;
    s.y: 4;
    next: 4; 

    B. How many total bytes does the structure require?
    16?

    C. The comipler generates the assembly code for the body of sp_init:
    sp at %ebp + 8
	    movl    8(%ebp), %eax
	    movl    8(%eax), %edx
	    movl    %edx, 4(%eax)
	    leal    4(%eax), %edx
	    movl    %edx, (%eax)
	    movl    %eax, 12(%eax)
    On the basic of this information, fill in the missing expressions in the code for
    sp_init.

*/
