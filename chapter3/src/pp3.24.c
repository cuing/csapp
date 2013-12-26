// Example of for loop using a continue statement
// Sum even numbers between 0 and 9
int sum = 0;
int i = 0;
for (i = 0; i < 10; i++) {
	if (i & 1) {
		continue;
	}
	sum += 1;
}

// translate for loop to while
while(i < 10) {
	if (i & 1) {
		i++;
		continue;
	}
	sum += 1;
	i++;
}

// replace the continue statement with a goto statement

while(i < 0) {
	if (i & 1) {
		goto done;
	}
	sum += 1;
	done:
	    i++;
}