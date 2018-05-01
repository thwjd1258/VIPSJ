#include <stdio.h>

/*	sum : 1부터 100까지 합
odd : 1부터 100까지 홀수의 합
div : 소수 둘째짜리까지 나타내기

*/
int ex3() {

	int num1, num2, div;
	int sum = 0, odd = 0;

	for (int i = 1; i <= 100; i++)
		sum = sum + i;

	for (int j = 1; j <= 100; j = j * 2)
		odd = odd + j;

	printf("합 = %d\n", sum);
	printf("홀수의 합 = %d\n", odd);

	num1 = 10;
	num2 = 3;

	div = num1 / num2;

	printf("num1/num2 = %d\n", div);

	return 0;

}
