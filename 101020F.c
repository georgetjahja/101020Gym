#include<stdio.h>
#include<math.h>

int main(){
	int iter, i, j, k, temp;
	
	scanf ("%d", &iter);
	
	int out1[101]={0}, out2[101]={0};
	
	for(i = 0; i < iter; i++)
	{
		int n;
		
		scanf ("%d", &n);
		
		int in[16] = {0};
		
		for (j = 0; j < n; j++)
		{
			scanf ("%d", &in[j]);
			temp = in[j];
			k = j;
			
			while (k >= 1)
			{
				if (temp >= in[k-1])
				{
					in[k] = temp;
					break;
				}
				else if (temp <= in[k-1])
				{
					in[k] = in[k-1];
					
					if (k - 1 == 0)
					{
						in[k-1] = temp;
					}
					k--;
				}
			}
		}
		
		temp = 0;
		out2[i] = 0;
		
		for(j = 0; j < n; j++)
		{
			temp += in[j];
			out2[i] += temp;
			out1[i] = j+1;
			
			if(temp > 300)
			{
				out1[i] = j;
				out2[i] -= temp;
				break;
			}
		}
	}
	for (i = 0; i < iter; i++)
	{
		printf ("%d %d\n", out1[i], out2[i]);
	}
}
	
