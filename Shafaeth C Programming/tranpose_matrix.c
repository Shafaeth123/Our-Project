#include<stdio.h>
int main()
{

int i,j,n,m,a[100][100],b[100][100],c[100][100];
printf("Enter row:");
scanf("%d",&m);
printf("Enter col:");
scanf("%d",&n);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
      printf("element-[%d],[%d]:",i,j);
      scanf("%d",&a[i][j]);
    }

    }
printf("The First matrix is:\n");

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
    }

    printf("after transpose\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
      printf("%d ", a[j][i]);
    }
    printf("\n");
    }

}