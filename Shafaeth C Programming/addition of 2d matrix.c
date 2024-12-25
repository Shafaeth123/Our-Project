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
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
      printf("element-[%d],[%d]:",i,j);
      scanf("%d",&b[i][j]);
    }

    }
printf("The Second matrix is:\n");

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
      printf("%d ", b[i][j]);
    }
    printf("\n");
    }
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        c[i][j]+=a[i][j]*b[i][j];
    }

    }
printf("The Addition of two matrix is:\n");

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
      printf("%d ", c[i][j]);
    }
    printf("\n");
    }
}

