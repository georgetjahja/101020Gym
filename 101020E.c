#include<stdio.h>
#include<math.h>
int main(){
	int iter, i, n;
	
	scanf ("%d", &iter);
	
	int out[iter];
	
	scanf("%d", &n);
	
	for(i = 0; i < iter; i++){
		int x1, y1, x2, y2;
		
		scanf ("%d %d", &x1, &y1);
		scanf ("%d %d", &x2, &y2);
		
		if (((x1 + y1) % 2 == 0) != ((x2 + y2) % 2 == 0))
		{
			out[i] = 20; 
		}
		else if (abs(x1 - x2) == abs(y1 - y2))
		{
			out[i] = abs(x1 - x2);
		}
		else if(abs(x1 - x2) > abs(y1 - y2))
		{
			out[i] = abs(x1 - x2);
		}
		else
		{
			out[i] = abs(y1 - y2);
		}
	}
	for(i = 0; i < iter; i++)
	{
		switch(out[i])
		{
			case 20:
				printf("can't reach!\n");
				break;
			default:
				printf("%d\n", out[i]);
		}
	}
}
