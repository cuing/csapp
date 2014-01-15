/*
Consider the following source code, where M and N are constants declared with #define
*/

int mat1[M][N]
int mat2[N][M]

int sum_element(int i, int j) {
	return mat1[i][j] + mat2[j][i]
}

/*
In compiling this program, GCC generates the following assembly code:
i at %ebp+8, j at %ebp + 12

movl    8(%ebp), %ecx
movl    12(%ebp), %edx
leal    0(, %ecx, 8), %eax
subl    %ecx, %eax
addl    %edx, %eax               // %eax = 7i + j
leal    (%edx, %edx, 4), %edx
addl    %ecx, %edx               // %edx = 5j + i  
movl    mat1(,%eax, 4), %eax
addl    mat2(,%edx, 4), %eax

N = 7;
m = 5;
*/




