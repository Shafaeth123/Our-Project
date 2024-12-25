#include <stdio.h>

int main()
{
     int a[101],i,n;

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
        if (arr1[i] % 2 == 0)
{
            arr2[j] = arr1[i];
            j++;
    }
        else
{
            arr3[k] = arr1[i];
            k++;
    }
}
    printf("\nThe Even elements are : \n");
    for (i = 0; i < j; i++)
{
        printf("%d ", arr2[i]);
    }
    printf("\nThe Odd elements are :\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n\n");
}
