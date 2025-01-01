#include<stdio.h>
#include<string.h>
int main()
{char a[140],b[100];
int i,vowel=0,consonant=0;
printf("Enter the character digit:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
        vowel++;
    }
    else{
        consonant++;
    }
}
  printf("total vowel is:%d\n",vowel);
  printf("total consonant is:%d",consonant);
}