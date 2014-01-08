int switcher(int a, int b, int c) {
	int answer;
	switch(a) {
		case 0:
		    answer = c + 112;
		    break;

		case 2:
		    answer = (b + c) / 4;
			break;

	    case 4:
	        answer = 4;
	        break;

	    case 5:
			c = b ^ 15;

		case 7:
		    answer = (b + c) / 4;

		default:
		answer = b;
	}
	return answer;
}