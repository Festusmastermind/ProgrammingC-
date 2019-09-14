#include <stdio.h>
#include <ctype.h>

int main()
{
   int i = 0;
   char c;
   char str[] = "TUTORIALS POINT";
	
   while( str[i] ) 
   {
      putchar(tolower(str[i]));
      i++;
   }
   
   return(0);
   // another program illustration...
   #include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'h';
   int var2 = '2';
    
   if( isdigit(var1) )
   {
      printf("var1 = |%c| is a digit\n", var1 );
   }
   else
   {
      printf("var1 = |%c| is not a digit\n", var1 );
   }
   
   if( isdigit(var2) )
   {
      printf("var2 = |%c| is a digit\n", var2 );
   }
   else
   {
      printf("var2 = |%c| is not a digit\n", var2 );
   }
   
   return(0);
}
#include <iostream>
#include <ctime>

using namespace std;

int main( )
{
   // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt << endl;

   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;
}
#include <iostream>
#include <ctime>

using namespace std;

int main( )
{
   // current date/time based on current system
   time_t now = time(0);

   cout << "Number of sec since January 1,1970:" << now << endl;

   tm *ltm = localtime(&now);

   // print various components of tm structure.
   cout << "Year: "<< 1900 + ltm->tm_year << endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Time: "<< 1 + ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;
}
