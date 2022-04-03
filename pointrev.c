#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter values\n");
    int a[n],b[n];
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Reversed array\n");
    for ( i = 0; i < n; i++)
    {
       *(b+i) = *(a+n-1-i);
       printf("%d ",b[i]);
    }
	return 0;
}