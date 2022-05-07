#include<stdio.h>
#include<conio.h>

void main()
{
	int i, a[100], t, n, m;
	int f = 1;
	printf("Enter the number in assending order:");

	printf("Enter the array value:");
	scanf("%d", &n);

	printf("Enter the array element:");
	for (i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter teh element to found");
	scanf("%d", &t);

	int l = 0;
	int h = n - 1;

	while (l <= h)
	{
		m = (l + h) / 2;
		if (t<a[m])
		{
			h = m - 1;
		}
		else if (t>a[m])
		{
			l = m + 1;
		}
		else
		{
			printf("The element is %d and position is %d ", t, m + 1);
			f = 2;
			break;
		}
	}
	if (f == 1)
	{
		printf("The element not found");
	}
	getch();
}