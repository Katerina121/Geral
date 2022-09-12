#include <stdio.h>

main()
{
	int a = 1;
	int b = 1;
	while(a<=10)
	{
		if (b<=10)
		{
			while(b<=10)
			{	
				printf("%2d\t", a*b);
				b++;
			}
		}
		else 
		{ 
			a++;
			b=1;
			printf("\n");
		}
	}		
}
