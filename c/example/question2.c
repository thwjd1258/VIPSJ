#include <stdio.h>

/*
삼각형 별 만들기
ex) i=3
*
***
*****
*/
int question2()
{
	int i = 0, j = 0, s = 0, star = 0;

	do
	{
		printf("Input the number n : ");
		scanf("%d", &i);

		for (j = 0; j<i; j++)
		{
			for (s = 0; s<i - 1 - j; s++)
			{
				printf("*");
			}
			for (star = 0; star<j * 2 + 1; star++)
			{
				printf("*");
			}
			printf("\n");
		}
	} while (i != 0);

	return 0;
}

