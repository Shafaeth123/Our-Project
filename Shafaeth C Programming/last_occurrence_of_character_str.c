#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,count=-1;
    char ch;
    printf("Enter first string:");
    gets(a);
    printf("Enter the character:");
    scanf("%c",&ch);
  
 for(i=0;a[i]!='\0';i++)
{
  if(ch==a[i])
  {
   count=i;
  }
}
if(count!=-1)
{
  printf("%c character occurance at %d",ch,count);


}
else{
  printf("the character is not available");
}




}