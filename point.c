#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,max=1,min=1,t;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter values\n");
    int a[n];
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
        if(*(a+i)>=*(a+max))
        {
            max=i;
        }
        else if(*(a+i)<=*(a+min))
        {
            min=i;
        }
    }
    t = *(a+min);
    *(a+min) = *(a+max);
    *(a+max) = t;
    printf("New arrangement\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}