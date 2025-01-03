#include<stdio.h>
int main()
{
    int i,j;
    char a[100],b[100];
    int len=0;
    printf("Enter first string:");
    gets(a);  
        printf("2nd string:");
     gets(b);
    for(i=0;a[i]!='\0';i++)
{
    len++;
}
a[i]='\0';
    
    for(j=0;b[j]!='\0';j++,i++)
    {
        
a[len+j]=b[j];

    }
a[len+j]='\0';
        printf("concatenate string is:%s",a);

}