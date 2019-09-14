/* C++ PRACTICAL 
NAME: KOLAWOLE BLESSING OLUWATOSIN; MATRIC NO; 110404018
NAME: IRINOYE TITLAYO BUSIRAT; MATRIC NO: 110404017*/
// OUR PROGRAM

#include <iostream>
using namespace std;
main()
{
	int opcode;
	
	//DESIGN MENU
    cout<<" THE FOLLOWING ARE THE AGE GRPOUP DISTRIBUTION :\n\n";
	cout<<" INFANT \n\n";
	cout<<" ADOLESCENT \n\n";
	cout<<" YOUTH  \n\n";
    cout<<" ADULT \n\n";
	cout<<" AGED \n\n\n\n";
    cout<<" If your age group fall between 0 - 6 yrs, \t\t Press 1 \n\n";
    cout<<" If your age group fall between 7 - 13 yrs, \t\t Press 2 \n\n";
    cout<<" If your age group fall between 14 - 24 yrs, \t\t Press 3 \n\n";
    cout<<" If your age group fall between 25 - 55 yrs, \t\t Press 4 \n\n";
    cout<<" If your age group fall between 56 and above, \t\t Press 5 \n\n\n";
	cout<<" Now, Enter the code of the age group you fall into \n\n ";
	cin>>opcode;

switch (opcode) 
{
case 1:
{
cout<<"\n You are an infant\n ";
}
break;
case 2:
{
cout<<"\n You are an adolescent\n ";
}
break;
case 3:
{
cout<<"\n You are a youth\n ";
}
break;
case 4:
{
cout<<"\n You are an adult\n ";
}

break;
case5:
{
cout<<"\n You are an aged\n ";
}
break;
default:
{
cout<<"\n Sorry, you have selected a wrong age group\n ";
cout<<"\n Exit, then start another operation and enter your age within 0 - 150\n\n ";
cout<<"\n Press Enter key to exit!!!\n\n";
return 0;
}
break;
}
}
