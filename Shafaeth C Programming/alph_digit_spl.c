#include<stdio.h>
int main()
{
    char a[100],b[100];
    int alp=0,digit=0,spl=0,i;
    printf("Enter first string:");
    gets(a);  
    for(i=0;a[i]!='\0';i++)
{
   if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
   {
    alp++;
   }
   else if (a[i]>='0'&&a[i]<='9')
   {
    digit++;}
  else {    
spl++;
   }
}
    printf("alph of the string:%d\n",alp);
    printf("digit of the string:%d\n",digit);
    printf("special character of the string:%d\n",spl);



}