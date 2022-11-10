#include<stdio.h>
#include<math.h>

int main(){
	int iter;
	int i;
	int j;
	int k;
	int pie[10001];
	char mat[21][21];
	
	scanf ("%d", &iter);

	for (i = 0; i < iter; i++)
	{
		int row;
		int col;
		
		pie[i] = 0;
		scanf (" %d %d", &row, &col);
		
		for (j = 0; j < 21; j++)
		{
			memset(mat[j], 0, 21);
		}
		
		for (j = 0; j < row; j++)
		{
			for (k = 0; k < col; k++)
			{
				scanf (" %c", &mat[j][k]);
			}
		}
		
		for (j = 0; j < row; j++)
		{
			for (k = 0; k < col; k++)
			{
				if (mat[j][k] == 'i')
				{
					if ((mat[j][k-1] == 'p' && mat[j][k+1] == 'e') || (mat[j][k-1] == 'e' && mat[j][k+1] == 'p') || (mat[j-1][k] == 'p' && mat[j+1][k] == 'e') || (mat[j-1][k] == 'e' && mat[j+1][k] == 'p') || (mat[j-1][k-1] == 'p' && mat[j+1][k+1] == 'e') || (mat[j-1][k-1] == 'e' && mat[j+1][k+1] == 'p') || (mat[j-1][k+1] == 'p' && mat[j+1][k-1] == 'e') || (mat[j-1][k+1] == 'e' && mat[j+1][k-1] == 'p'))
					{
						pie[i]++;
						break;
					}
				}
			}
		}
	}
	for (i = 0; i < iter; i++)
		{
			if (pie[i] == 0)
			{
				printf ("Sorry Man\n");
			}
			else
			{
				printf ("Cutie Pie!\n");
			}
		}
}
