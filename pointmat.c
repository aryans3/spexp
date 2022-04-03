#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter rows and columns\n");
    scanf("%d %d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("Enter matrix 1\n");
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
          scanf("%d",&a[i][j]);
       }
    }
    printf("Enter matrix 2\n");
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
          scanf("%d",&b[i][j]);
       }
    }
     printf("New matrix \n");
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
          printf("%d ",*(*(a+i)+j)-*(*(b+i)+j));
       }printf("\n");
    }
    return 0;
}
