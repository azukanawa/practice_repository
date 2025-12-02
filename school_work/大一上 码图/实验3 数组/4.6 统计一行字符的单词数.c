#include <stdio.h>
#include <string.h>
int main()
{
	char input[257];
	int i = 0;
	int num = 0;
	gets(input);
	
	for(i = 0; i < strlen(input); i++)
	{
		if(input[i] != 32)
		{
			
			

			if(input[i + 1] == 32 || input[i + 1] == '\0')
			{
				
				
					num++;
				
			}
		}
			else if(input[i + 1] != 32)
			{
				continue;
			}
			
			
		
			
	}

	printf("%d", num);

	

	
	
	return 0;
}