int switch2(int x) {
	int result = 0;
	switch (x) {
		case -2:
		    result += 1;
		    break;
		case -1:
		    result += 2;
		    break;
		case 1:
		case 2:
		    result += 4;
		    break;
		case 3:
		    result += 4;
		    break;
		case 4:
		    result += 4;
		    break;
		default:
		    result += 9;
	}
	return result;
}