#include<stdio.h>
int main()
{
    char a[100],b[100];
    int vow=0,cons=0,i;
    printf("Enter first string:");
    gets(a);  
        printf("2nd string:");
     gets(b);
    for(i=0;a[i]!='\0';i++)
{
   if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='o'||a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='I'||a[i]=='U')
   {
    vow++;
   }
   else{
cons++;
   }
}
    printf("vowel of the string:%d\n",vow);
    printf("consonant of the string:%d",cons);



}