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
        if(i==j)
        {
            a[i][j]=1;
        }
        else{
            a[i][j]=0;
        }
    }
}

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(( a[i][j]==0)&&(a[i][j]==1))
        {
           printf("This is identity matrix\n");
        }
        else{
           printf("This is not identity matrix\n");

        }
    }

    }

}

