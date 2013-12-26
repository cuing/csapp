var sum = 0;
var i = 0;
while (i < 10) {
	if (i & 1) {
		i += 1;
		continue;
	}
	sum += i;
	i += 1;
}
// for (var i = 0; i < 10; i++) {
// 	if (i & 1) {
// 		console.log(i);
// 		continue;
// 	}

// 	sum += i;
// }
console.log('result');

console.log(sum);