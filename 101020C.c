#include<stdio.h>
#include<math.h>
int main(){
	int iter, x;
	int t, m, n;
	int sum[21] = {0};
	
	scanf("%d", &iter);
	
	for	(x = 0; x < iter; x++)
	{
		int i[101], j[101], k[101];
		int max = 0;
		int h[101] = {0};
		
		scanf ("%d", &t);

		for ( n = 0; n < t; n++)
		{
			scanf("%d %d %d", &i[n], &j[n], &k[n]);
		}
		
		for ( n = 0; n < t; n++)
		{
			for(m = i[n]; m < j[n]; m++)
			{
				if(k[n] > h[m])
				{
					h[m] = k[n];
				}
			}
			
			if (j[n] > max)
			{
				max = j[n];
			}
		}
		for (n = 0; n < max; n++)
		{
			sum[x] += h[n];
		}	
	}
	for (x = 0; x < iter; x++)
	{
		printf("%d\n", sum[x]);
	}
}
