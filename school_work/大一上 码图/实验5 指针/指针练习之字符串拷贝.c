#include <string.h>
#include <stdio.h>
int main()
{
	char origin[100];
	char cpy[100];
	int i = 0;
	int j = 0;
	int num = 0;
	gets(origin);
	for(i = 0; origin[i] != 0; i++)
	{
		cpy[j++] = origin[i];
		num++;
		if(num == 2 && origin[i + 1] != 0)
		{
			num = 0;
			cpy[j++] = '*';
		}
	}
	cpy[j] = 0;
	printf("%s\n", cpy);
	
	return 0;
}