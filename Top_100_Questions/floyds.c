#include<stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    //here num of elements in rows equal to row number
    int n=1;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
}