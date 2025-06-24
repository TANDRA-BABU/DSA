//sequencial search(searching element one after the other)
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a;
    int size, key, position;
    printf("PROVIDE SIZE: \n");
    scanf("%d", &size);
    a = (int *)malloc(size * sizeof(int));
    printf("PROVIDE THE ARRAY ELEMENTS: \n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("INPUT THE KEY: \n");
    scanf("%d", &key);
    position=0;
    while((position < size) && (key != a[position]))
        position++;
    if(position < size)
    {
        printf("%d POSITION.", position);
    }
    else
    {
        printf("ELEMENT NOT FOUND");
    }
}
