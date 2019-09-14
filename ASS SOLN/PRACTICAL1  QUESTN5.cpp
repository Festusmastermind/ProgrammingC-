/* C++ PRACTICAL 5
NAME: KOLAWOLE BLESSING OLUWATOSIN; MATRIC NO; 110404018
NAME: IRINOYE TITLAYO BUSIRAT; MATRIC NO: 110404017*/
// OUR PROGRAM

#include<iostream>
using namespace std;
main()
{
	int opcode;
	
	//DESIGN MENU
	cout<<" \n \t\t WELCOME TO HONDA MANUFACTURING COMPANY. \n\n";
    cout<<" The following named cars are the available new Honda Salon Car Models  :\n\n";
	cout<<" ALA \n\n";
	cout<<" BABY BOY \n\n";
	cout<<" END OF DISCUSSION \n\n";
	cout<<" DISCUSSION COMTINUES \n\n\n\n";
    cout<<" To select ALA, \t\t\t\t Press 1 \n\n";
    cout<<" To select BABY BOY, \t\t\t\t Press 2 \n\n"; 
    cout<<" To select DISCUSSION CONTINUES, \t\t Press 3 \n\n";
    cout<<" To select END OF DISCUSSION, \t\t\t Press 4 \n\n\n";
	cout<<" Now, Enter the code of the product you want\n\n\a ";
	cin>>opcode;

//Switch program starts
switch (opcode)
{
case 1:
{
cout<<"\n You have decided to a buy ALA\n ";
}
break;
case 2:
{
cout<<"\n You have decided to buy a BABYBOY\n ";
}
break;
case 3:
{
cout<<"\n You have decided to buy a DISCUSSION CONTINUES\n ";
}
break;
case 4:
{
cout<<"\n You have decided to buy a END OF DISCUSSION\n ";
}
break;
default:
{
cout<<"\n Sorry, you have selected a wrong code\n ";
cout<<"\n Exit, then start another operation and enter operation code within 1 - 4\n\n ";
cout<<"\n Press Enter key to exit!!!\n\n";
return 0;
}
break;
}


}
