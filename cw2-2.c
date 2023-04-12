 #include <stdio.h>
#include <string.h>

int main()
{
   char str1[100], str2[100];
   int i, flag = 0;

   printf("Enter the first string : ");
   gets(str1);

   printf("\nEnter the second string : ");
   gets(str2);

   for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
   {
      if(str1[i] != str2[i])
      {
         flag = 1;
         break;
      }
   }

   if(flag == 0 && str1[i] == '\0' && str2[i] == '\0')
      printf("\nBoth strings are equal.");
   else if(str1[i] > str2[i])
      printf("\nFirst string is greater.");
   else if(str1[i] < str2[i])
      printf("\nSecond string is greater.");
   else
      printf("\nStrings are not equal.");

   return 0;
}


