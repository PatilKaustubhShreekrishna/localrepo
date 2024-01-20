#include<stdio.h>
int main()
{
    int size;
    int A[100];
    printf("\nEnter Size - ");
    scanf("%d" , &size);
    printf("\nEnter Elements in ARRAY -");
    for(int i=0 ; i<size ;i++)
    {
        scanf("%d" , &A[i]);    
    }
    printf("\nARRAY is --->");
    for(int i=0 ; i<size ;i++)
    {
        printf("%d  " , A[i]);
    }

    return 0;
}