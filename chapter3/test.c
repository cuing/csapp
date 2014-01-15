// void absdiff(int a, int *p) {
// 	if (p && a > 0) {
// 		*p += a;
// 	}
// }

// void cond(int a, int *p) {
// 	if (p && a <= 0) {
// 		goto last;
// 	}

// 	*p += a;
// 	goto done;
// 	last: ;
// 	done: ;

// }

// int fact_do(int n) {
// 	int result = 1;
// 	do {
// 		result *= n;
// 		n = n - 1;
// 	} while (n > 0);
// 	return result;
// }


// Figure 3.15 C and assembly code for while version of factorial. The fact_while_goto
// function illustrates the operation of the assembly code version.
// int fact_while(int n) {
// 	int result = 1;
// 	while (n > 1) {
// 		result *= n;
// 		n = n - 1;
// 	}
// 	return result;
// }


// int fact_for(int n) {
// 	int i;
// 	int result = 1;
// 	for (i = 2; i <= n; i++) {
// 		result *= i;
// 	}
// 	return result;
// }

// int absdiff (int x, int y) {
// 	return x < y ? y - x : x - y;
// }

// int switch_eg(int x, int n) {
// 	int result = x;

// 	switch(n) {
// 		case 100:
// 		    result *= 122;
// 		    break;

// 	    case 102:
// 	        result += 10;

// 	    case 103:
// 	        result += 11;

// 	        break;
	    
// 	    case 104:
// 	    case 106:
// 	        result *= result;
// 	        break;

//         default:
//             result = 0;
// 	}
// 	return result;
// }

// int swap_add(int *xp, int *yp) {
// 	int x = *xp;
// 	int y = *yp;
// 	*xp = y;
// 	*yp = x;
// 	return x + y;
// }

// int caller() {
// 	int arg1 = 534;
// 	int arg2 = 1057;
// 	int sum = swap_add(&arg1, &arg2);
// 	int diff = arg1 - arg2;
// 	return sum * diff;
// }


// Figure 3.25  C code for recursive factorial program
// int rfact(int n) {
// 	int result;
// 	if (n <= 1) {
// 		result = 1;
// 	} else {
// 	    result = n * rfact(n - 1);
// 	}
// 	return result;
// }

/*(a) Original C code
  Compute i, k of fixed matrix product
*/

// int fix_prod_ele (fix_matrix A, fix_matrix B, int i, int k) {
// 	int j;
// 	int result = 0;

// 	for (j = 0; j < N; j++) {
// 		result += A[i][j] * B[j][k];
// 	}

// 	return result;
// }


/*
(b) Optimized C code
Compute i, k of fixed matrix product 
*/

// int fix_prod_ele_opt(fix_matrix A, fix_matrix B, int i, int k) {
// 	int *Arow = &A[i][0];
// 	int *Bptr = &B[0][k];

// 	int result = 0;
// 	int j;
// 	for (j = 0; j != N; j++) {
// 		result += Arow[j] * *Bptr;
// 		Bptr += N;
// 	}
// 	return result;
// }


// assembly code for fix_prod_ele_opt loop

// Registers: Arow in %esi, Bptr in %ecx, j in %edx, result in %ebx
// .L6:                                      loop
//   movl    (%ecx), %eax                    Get *Bptr
//   imull   (%esi, %edx, 4), %eax           Multiple by Arow[i]
//   addl    %eax, %ebx                      Add to result
//   addl    $1, %edx                        Increment j
//   addl    $64, %ecx                       Add 64 to Bptr
//   cmpl    $16, %edx                       compare j:16
//   jne     .L6                             If !=, goto loop



/*
Figure 3.28 Original and optimized code to compute element i, k of matrix product for
fixed-length arrays. The compiler performs these optimizations automatically.
*/


// Compute i, k of variable matrix product
int var_prod_ele(int n, int A[n][n], int B[n][n], int i, int k) {
	int j;
	int result = 0;
	for (j = 0; j < n; j++) {
		result += A[i][j] * B[j][k];
	}
	return result;
}


