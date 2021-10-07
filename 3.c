#include <stdio.h>
int threefivesome() {
	int three_some = 3;
	int five_some = 5;
	int my_sum = 0;
	while (three_some < 1000) {
		my_sum += three_some;
		three_some += 3;
	}
	while (five_some < 1000) {
		my_sum += five_some;
		five_some += 5;
	}
	return my_sum;
}
int lcm_one_twenty() {
	int product_to_twenty = (2 * 3 * 2 * 5 * 7 * 2 * 3 * 11 * 13 * 2 * 17 * 19);
	return product_to_twenty;
}
int diff_sum_square_square_sum() {
	int sum_squares;
	int square_sum;
	for (int i = 1; i <= 100; i++) {
		sum_squares += (i * i);
		square_sum += i;
	}
	square_sum = (square_sum * square_sum);
	return (square_sum - sum_squares);
}
int main() {
	printf("The sum of all multiples of 3 and 5 below 1000: \n%d\n",threefivesome());
	printf("The smallest positive # that is evenly divisible by all #s from 1 to 20: \n%d\n",lcm_one_twenty());
	printf("The difference between the sum of the squares of the first one hundred natural\nnumbers and the square of the sum: \n%d\n",diff_sum_square_square_sum());
	return 0;
}
/*
Number 1:

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, and 9.
The sum of these multiples is 23. Find the sum of all multiples of 3 and 5 below 1000.
The convention for C variable names is snake-case (underscores in the variable names.)
	
Number 5:


2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


Number 6:
<p>The sum of the squares of the first ten natural numbers is,</p>
$$1^2 + 2^2 + ... + 10^2 = 385$$
<p>The square of the sum of the first ten natural numbers is,</p>
$$(1 + 2 + ... + 10)^2 = 55^2 = 3025$$
<p>Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is $3025 - 385 = 2640$.</p>
<p>Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.</p>
*/
