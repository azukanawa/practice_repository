#include <stdio.h>
#include <string.h>
int fun(const char *p, int result[]);

int fun(const char *p, int result[])
{
	int a[20];
	int i = 0;
	
	if(p == NULL)
	{
		return 0;
	}
	
	while(*p != '\0')
	{
		
		if(*p >= 48 && *p <= 57)
		{
			a[i] = (int) *p - 48;
			p++;
			i++;
		}
		else
		{
			return 0;
		}
		
	}
	if(i != 13)
	{
		return 0;
	}

	result[0] = 1000 * a[0] + 100 * a[1] + 10 * a[2] + a[3];

	result[1] = 10 * a[4] + a[5];

	result[2] = 1000 * a[6] + 100 * a[7] + 10 * a[8] + a[9];

	result[3] = 100 * a[10] + 10 * a[11] + a[12];

	return 1;
}

