typedef union {
	struct {
		short v;
		short d;
		int s;
	} t1;
	struct {
		int a[2];
		char *p;
	} t2;
} u_type;

void get(u_type *up, TYPE *dest) {
	*dest = EXPR;
}

/*
up and dest are loaded into registers %eax and %edx.

EXPR                TYPE            Code
up -> t1.s          int         movl 4(%eax), %eax
	                            movl %eax, (%edx)

up -> t1.v          short       movw (%eax), %ax
                                movw %ax, (%edx)

&up -> t1.d         short *     leal 2(%eax), %eax
                                movl %eax, (%edx)

up -> t2.a          int *       movl %eax, (%edx)

up -> t2.a[up->t1.s] int        movl 4(%eax), %ecx
                                movl (%eax, %ecx, 4), %eax
                                movl %eax, (%eax)

*up -> t2.p          char       movl 8(%eax), %eax
                                movb (%eax), %al
                                movb %al, (%edx)
*/