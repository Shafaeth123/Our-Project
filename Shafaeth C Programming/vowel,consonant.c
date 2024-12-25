#include<stdio.h>
int main()
{

int  uppercase_vowel,lowercase_vowel;
   char c;
    printf("Enter a alphabet:");
    scanf("%c",&c);
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(c==lowercase_vowel|| uppercase_vowel)
    {
        printf("This is vowel");
    }
  //else if(N='A','E','I','O','U'){

   // printf("This is vowel",N);}
  else
  {
      printf("This is consonant");
  }

}
