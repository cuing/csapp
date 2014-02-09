char *gets(char *s) {
	int c;
	char *dest = s;
	int gotchar = 0;
	while ((c = getchar()) != '\n' && c != EOF) {
		*dest++ = c;
		gotchar = 1;
	}
	*dest++ = '\0';
	if (c == EOF && !gotchar) {
		return NULL;
	}
	return s;
}

char *getline() {

	char buf[8];
	char *result;
	gets(buf);
	result = malloc(strlen(buf));
	strcpy(result, buf);
	return result;
}

