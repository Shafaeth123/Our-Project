#include<stdio.h>
int main()
{

int i,j,n,m,a[100][100],b[100][100],c[100][100],isSymmetric;
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
b[j][i]=a[i][j];
    }

    }

    printf("after transpose\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
      printf("%d ", b[i][j]);
    }
    printf("\n");
    }
    isSymmetric=0;
    for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
      if(a[i][j]!=b[i][j])
      {
        isSymmetric=1;
        break;
      }
    }
    }
    if(isSymmetric==0)
    {
      printf("This is symmetric\n");
    }
    else{
      printf("This is not symmetric\n");
    }

}