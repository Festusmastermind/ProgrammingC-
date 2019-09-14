w#include<iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;
main()
{
   int i = 0;
   int n;
   cout<<"please enter the lenght of the text you want to convert: ";
   cin>>n;
   char str[n];
   cout<<"enter a some text here to convert it: ";
   for (i=0; i<n; i++){
   cin>>str[i];
}
	
  for (i=0; i<n; i++)
   {
   	if (str[i]==(lower))
   	{
      putchar(toupper(str[i]));
      cout<<str[i];
  }
  else
  {
  putchar(tolower(str[i]));
      cout<<str[i];	
  }
   }
   
   return(0);
}
