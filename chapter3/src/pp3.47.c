typedef int src_t;
typedef long dest_t;

dest_t cvt(src_t x) {
	dest_t y = (dest_t) x;
	return y;
}

/*

src_t            dest_t            Instruction        S        D
--------------------------------------------------------------------
long             long              movq               %rdi     %rax
int              long              movslq             %edi     %rax
char             long              movsbq             %dil     %rax
unsigned int     unsigned long     movzlq             %edi     %rax
unsigned char    unsigned long     movzbq             %dil     %rax
long             int               movsql             %rdi     %eax
usigned long     unsigned          movl               %edi     %eax  

*/