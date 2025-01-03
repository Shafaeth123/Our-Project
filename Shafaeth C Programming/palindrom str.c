#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,len=0;
    int flag=0;
    printf("Enter first string:");
    gets(a);  
    for(i=0;a[i]!='\0';i++)
{
  len++;
}
 for(i=0;i<len;i++)
{
  if(a[i]!=a[len-1-i])
  {
    flag=1;
    break;
  }
}
if(flag==0)
{
  printf("this is palindrom");
}
else{
  printf("this is not palindrom");
}


}