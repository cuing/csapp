int fun(short c, int x, char d, int *p) {
	*p = d;
	return x - c;
}

/*
movsbl   12(%ebp), %edx
movl     16(%ebp), %eax
movswl   8(%ebp), %eax
movl     20(%ebp), %edx
subl     %eax, %edx
movl     %edx, %eax
*/