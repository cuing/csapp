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
int rfact(int n) {
	int result;
	if (n <= 1) {
		result = 1;
	} else {
	    result = n * rfact(n - 1);
	}
	return result;
}