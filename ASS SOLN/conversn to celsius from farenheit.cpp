#include <iostream.h>
main()
{
      float fvalue, celsius, kelvin;
      cout<<"\n Enter any number that you want to convert fron farenheit to celsius   ";
      cin>>fvalue;
       
       celsius =( 5.0/9.0 * (fvalue - 32.0));
       cout<<"\n "<<fvalue<<"F in celsius is = "<<celsius<<"C \n";
       kelvin = (celsius + 273.15);
       cout<<"\n "<<fvalue<<"F in celsius is = "<<celsius<<"C  in kelvin is = "<<kelvin<<"K \n";
       system("pause");
       return 0;
       }
