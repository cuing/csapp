void cond(int a, int *p) {
	int c;
	if (p && a <= 0) {
		goto p_le_a;
	}
	*p += a;
	goto done;
	p_le_a: ;
	done: ;
}

// because p && a was short circuit expression. if p was zero it will not evaluate a;