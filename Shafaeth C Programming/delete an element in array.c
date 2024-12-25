#include<stdio.h>
int main()
{
    int a[101],i,n,pos;

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
printf("Enter the location where you wish to delete element:");
    scanf("%d", &pos);

    if ( pos >= n+1 )
    printf("Deletion not possible.\n");

    else
    {
        for ( i = pos - 1 ; i < n - 1 ; i++ ){
        a[i] = a[i+1];
        }
        printf("Resultant array is\n");

        for( i = 0 ; i < n - 1 ; i++ ){
        printf("%d\n", a[i]);
    }
    }

}
