int fun_b(unsigned x) {
	int val = 0;
	int i;
	for (i = 0; i != 32; i++) {
		val = 2 * val | (x & 1);
		x >>= 1;
	}
	return val;
}

// reverse x 