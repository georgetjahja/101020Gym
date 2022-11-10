#include <stdio.h>

int main(){
	int iter;
	int i, j;
	int output[101] = {0};
	
	scanf ("%d", &iter);
	
	for (i = 0; i < iter; i++)
	{
		int amount;
		int number;
		int max = 0;
		int occur[20001] = {0};
			
		scanf ("%d", &amount);
			
		for (j = 0; j < amount; j++)
		{
			scanf ("%d", &number);
			if (number != 0)
			{
				occur[number] = occur[number - 1] + 1;
			}
			else
			{
				occur[number] = 1;
			}
			
			if (number > max)
			{
				max = number;
			}
		}
		
		for (j = 0; j <= max; j++)
		{
			if (occur[j] > output[i])
			{
				output[i] = occur[j];
			}
		}
	}
	
	for (i = 0; i < iter; i++)
	{
		printf ("%d\n", output[i]);
	}
	
}
