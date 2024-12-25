#include<stdio.h>
int main()
{
   int a[10], b[10],c[10];
    int i, j = 0, k = 0, n;

    printf("Enter number:");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
}
       for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);

}

   for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }
   for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }
}
