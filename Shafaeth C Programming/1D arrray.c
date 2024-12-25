#include<stdio.h>
int main()
{

int i,j,n,m,a[i][j];
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
printf("The matrix is:\n");

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
    }
}
