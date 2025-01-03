#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,count=0;
    char ch;
    printf("Enter first string:");
    gets(a);
    printf("Enter the character:");
    scanf("%c",&ch);
  
 for(i=0;a[i]!='\0';i++)
{
  if(ch==a[i])
  {
   count++;
  }
}

  printf("occurence of the character:%d",count);


}