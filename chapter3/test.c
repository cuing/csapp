// void absdiff(int a, int *p) {
// 	if (p && a > 0) {
// 		*p += a;
// 	}
// }

void cond(int a, int *p) {
	if (p && a <= 0) {
		goto last;
	}

	*p += a;
	goto done;
	last: ;
	done: ;

}