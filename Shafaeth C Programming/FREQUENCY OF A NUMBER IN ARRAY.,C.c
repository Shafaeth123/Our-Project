#include<stdio.h>
int main()
{
    int a[100],i,n,j,freq[100],count;

    printf("Enter number:");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);}
       for(i=0;i<n;i++)
{
        printf("%d\n",a[i]);
                freq[i]=-1 ;

}

 for(i=0;i<n;i++)
    {
count=1;
for(j=2;j<n;j++)
{
    if(a[i]==a[j])
    {
        count++;
 freq[j]=0;
}
}
if(freq[i] != 0)
        {
            freq[i] = count;
        }

}
 for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }
}
