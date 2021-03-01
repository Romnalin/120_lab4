#include <stdio.h>
#include <string.h>

void Acronym (char *s);
int main()
   {
     char uname[30];
     gets(uname);
     Acronym(uname);
   }
   void Acronym(char *s)
   {
     int i,n;
     n=strlen(s);
     for(i=0;i<n;i++)
     if(i==0)
     printf("%c",toupper(s[0]));
     else if(s[i]==' ')
     printf("%c",toupper(s[i+1]));

   }






