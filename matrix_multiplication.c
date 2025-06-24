#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,n,m1,n1,k;
	int **a, **b, **res;
	int i,j;

	printf("Input the dimension of the 1st matrix: ");
	scanf("%d%d",&m,&n);
	printf("Input the dimension of the 2nd matrix: ");
	scanf("%d%d",&m1,&n1);

	if(n == m1)
	{
		a=(int **)calloc(m,sizeof(int *));
		for(i=0; i<m; i++)
		{
			a[i] = (int *)calloc(n,sizeof(int));
		}
		res = (int **)calloc(m,sizeof(int *));
		for(i=0; i<m; i++)
		{
			res[i] = (int *)calloc(n1,sizeof(int));
		}
		b=(int **)calloc(m1,sizeof(int *));
		for(i=0; i<m; i++)
		{
			b[i] = (int *)calloc(n1,sizeof(int));
		}

		printf("\nInput the 1st matrix: ");
		for(i=0; i<m; i++)
		{
			for(j=0; j<n; j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
		printf("\nInput the 2nd matrix: ");
		for(i=0; i<m1; i++)
		{
			for(j=0; j<n1; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}		
		for(i=0; i<m; i++)
		{
			for(j=0; j<n; j++)
			{
				res[i][j] = 0;
				for(k=0; k<m1; k++)
				{
					res[i][j] += a[i][k] * b[k][j];
				}
			}
		}

		printf("\nTHE MULTIPLIED MATRIX IS: \n");
		for(i=0; i<m; i++)
		{
			for(j=0; j<n1; j++)
			{
				printf("%d \t", res[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\nMATRIX MULTIPLICATION IS NOT POSSIBLE.");
	}
}
