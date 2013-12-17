void decode1 (int *xp, int *yp, int *zp) {
	int x, y, z, a, b, c;
	x = *xp;
	y = *yp;
	z = *zp;

	*yp = x;
	*zp = y;
	*xp = z; 
}