#include<stdio.h>
#include<math.h>

int main(){
	int t, i;
	
	scanf ("%d",&t);
	
	int w[t], h[t];
	
	for (i = 0; i < t; i++)
	{
		scanf ("%d %d", &w[i], &h[i]);
	}
	for (i = 0; i < t; i++)
	{
		if( (w[i] * h[i]) % 2 == 0)
		{
			printf ("Hasan\n");
		}
		else
		{
			printf ("Hussain\n");
		}
	}
}
