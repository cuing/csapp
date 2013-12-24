/*int absdiff(int x, int y) {
	if (x < y) {
		return y - x;
	} else {
		return x - y;
	}
}*/


int absdiff(int x, int y) {
	int t = x - y;
	if (t < 0) {
		goto yes;
	}
	goto no;
	yes:
	    return x - y;
	no: 
	    return y - x;
}