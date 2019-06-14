#include<stdio.h>
int combination(int n,int r);
int factorial(int num);
int main()
{
    int NoOfRows,i,j;
    printf("Enter the no of rows:");
    scanf("%d",&NoOfRows);
    for(i=0;i<NoOfRows;i++)
    {
        for(j=0;j<NoOfRows-1-i;j++)
            printf(" ");
        for(j=0;j<=i;j++)
        {
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }

    return 0;
}
int combination(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int factorial(int num)
{
    if(num<1)
        return 1;
    else
        return num*factorial(num-1);



}

