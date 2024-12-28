#include<stdio.h>
int main()
{

int i,j,k,r1,r2,c1,c2,a[100][100],b[100][100],c[100][100];
printf("Input row of first matrix:");
scanf("%d",&r1);
printf("Input col of first matrix:");
scanf("%d",&c1);
printf("Input row of second matrix:");
scanf("%d",&r2);
printf("Input col of second matrix:");
scanf("%d",&c2);
if(r1 != c2)
{
    printf("Multiplication of matrices is not possible\n");
    printf("row of the first matrix and col of the second matrix must be the same\n");
}
else{
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
      printf("element-[%d],[%d]:",i,j);
      scanf("%d",&a[i][j]);
    }

    }
printf("The First matrix is:\n");

for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
    }
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
      printf("element-[%d],[%d]:",i,j);
      scanf("%d",&b[i][j]);
    }

    }
printf("The Second matrix is:\n");

for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
      printf("%d ", b[i][j]);
    }
    printf("\n");
    }
    for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        c[i][j]=0;
    }

    }
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        for(k=0;k<c1;k++)
        {
        c[i][j]+=a[i][k]*b[k][j];
    }
    }
    }
printf("The Multiplication of two matrix is:\n");

for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
      printf("%d ", c[i][j]);
    }
    printf("\n");
    }
}
}

