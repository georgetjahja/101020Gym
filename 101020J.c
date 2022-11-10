#include<stdio.h>
#include<stdbool.h>  

int main(){
	int i;
	int iter;
	int out[5001] = {0};	
	
	scanf ("%d", &iter);
	
	for (i = 0; i < iter; i++)
	{
		
		int x;
		int y;
		int z;
	
		scanf ("%d %d", &x, &y);
		
		while (1)
		{	
			z = x % y;
			
			if (z == 0)
			{
				break;
			}
			else if (z == 1)
			{
				out[i] = 1;
				break;
			}
			
			x = y;
			y = z;
		}
		
	}
	
	for (i = 0; i < iter; i++)
	{
		if (out[i] == 0)
		{
			printf ("NOT GOOD\n");
		}
		else 
		{
			printf ("GOOD\n");
		}
	}
}
