#include <stdio.h>

int main()
{
	int num, remainder, reverse = 0;

	scanf("%d", &num);

	while(num>0)
	{
		remainder = num % 10;
		reverse = reverse * 10 + remainder;
		num /= 10;
		printf("%d\n",reverse);
	}
	printf("%d\n",reverse);
	return 0;
}
