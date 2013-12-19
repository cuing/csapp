int arith(int x, int y, int z) {
	int t1 = x + y;
	int t2 = z * 48;
	int t3 = t1 & 0xFFFF;
	int t4 = t2 * t3;
	return t4;
}

/*
 * In general, compilers generate code that uses individual registers for multiple
 * program values and moves program values among the registers.
 */