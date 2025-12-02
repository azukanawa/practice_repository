#include <stdio.h>
void isort(int a[], int n);



void isort(int a[], int n)
{
	int middle = 0;
	int i = 0;
	if(a == NULL || n <= 0)
	{
		printf("error");
	}
	else
	{
		for (i = 0; i < n / 2; i++)
		{
			middle = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = middle;
		}
		for (i = 0; i < n; i++)
		{
			printf("%d",a[i]);
			if(i != n - 1)
			{
				printf(",");
			}
			
		}
	}
}


