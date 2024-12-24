#include <stdio.h>

int	main(void)
{
	long n;
	int r;
	int arr[10] = {0};
	scanf("%ld", &n);
	int counter = 0;
	while (n)
	{
		r = n % 10;
		if (arr[r] == 0)
			arr[r] += 1;
		n = n / 10;
	}
	int i = 0;
	while (i <= 10)
	{
		if (arr[i] == 1)
			counter++;
		i++;
	}
	printf("%d", counter);
	return (0);
}
