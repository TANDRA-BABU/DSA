#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a; //declare a as a pointer to a pointer to an int 
    int m, n;
    printf("PROVIDE THE DIMENSIONS: ");
    scanf("%d %d", &m, &n);
    a = (int **)malloc(n*sizeof(int *));
    for(int i=0; i<n; i++)
    {
        a[i]=(int *)malloc(n*sizeof(int));
    }
    printf("\nINPUT THE ARRAY: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter element a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nTHE MATRIX IS: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]); //printing matrix in tabular format
        }
        printf("\n");
    }
    return 0;
}
