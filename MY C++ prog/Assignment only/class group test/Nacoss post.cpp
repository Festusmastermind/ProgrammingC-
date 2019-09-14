#include <iostream>
using namespace std;
main()
// A c++ program that selects tha appropriate contestants for the nacoss posts
{
	int amount, cgpa;
	int post;
	// this section captures the amount for each posts
	cout<<"\n\t***NACOSS POST AVAILABLE\n***";
	cout<<"\n 1. PRESIDENT IS #5OOO ONLY\n";
	cout<<"\n 2. VICE PRESIDENT IS #45OO ONLY\n";
	cout<<"\n 3. GEN.SEC IS #4OOO ONLY\n"; 
	cout<<"\n 4. TREASURER IS #3OOO ONLY\n";
	cout<<"\n 5. WELFARE IS #2OOO ONLY\n\n";
	// this section activate the menu for the posts available
	cout<<"****THE MENU FOR THE POST ARE AS FOLLOWS****";
	cout<<"\n\n Enter 1 for Presient\n";
	cout<<"\n Enter 2 for Vice President\n";
	cout<<"\n Enter 3 for Gen.Sec\n";
	cout<<"\n Entre 4 for Treasurer\n";
	cout<<"\n Enter 5 for Welfare\n\n";
	cin>> post;
	cout<<endl;
	// using switch case control structure for the implementation of the menu
      switch (post)
      {
      	case 1: cout<<" You are vying for the post of president\n";
      	        cout<<"Enter the amount you pay: ";
      	        cin>>amount;
      	        if(amount==5000)
      	        {
      	        	cout<<" Enter your cgpa: ";
      	        	cin>>cgpa;
      	        	if(cgpa>=2.5)
      	        	{
					  cout<<" you are qualified for the post\a\a\n";
      	        	}
      	        	else{
      	        		cout<<" You are not qualified\a\a";
      	        	}	
      	        }
      	        else {
      	        	cout<<"\n Pay the approprite amount/fee";
      	        }
      	        break;
      	case 2: cout<<"\n You are the vying for the post of vice president ";
      	        cout<<"\n Enter the amount you paid for: ";
      	        cin>>amount;
      	        if(amount==4500)
      	        {
      	        	cout<<" Enter your cgpa: ";
      	        	cin>> cgpa;
      	        	if(cgpa>=2.5)
      	        	{
      	        		cout<<" You are qualified for the post\a\a ";
      	        	}
      	        	else{
      	        		cout<<" You are not qualified\a\a ";
      	        	}
      	        }
      	        else {
      	        	cout<<"\n Pay the appropriate fee";
      	        }
      	        break;
      	case 3: cout<<"\n You are vying for the post of Gen.Sec\n";
      	        cout<<"Enter the amount you paid for: ";
      	        cin>>amount;
      	        if(amount==4000)
      	         {
      	         	cout<<" Enter your cgpa";
      	        	cin>>cgpa;
      	        	if(cgpa>=2.5)
      	        	{
      	        		cout<<" You are qualified for the post\a\a";
      	        	}
      	            else {
      	            	cout<<" You are not qualified for the post\a\a";
      	            }
      	           
      	        }
      	         else {
      	            	cout<<" please pay the  required amount";
      	            }
      	            break;
		case 4: cout<<"\n You are vying for the post of Treasurer\n";
      	        cout<<"Enter the amount you paid for: ";
      	        cin>>amount;
      	        if(amount==3000)
      	         {
      	         	cout<<" Enter your cgpa";
      	        	cin>>cgpa;
      	        	if(cgpa>=2.5)
      	        	{
      	        		cout<<" You are qualified for the post\a\a";
      	        	}
      	            else {
      	            	cout<<" You are not qualified for the post\a\a";
      	            }
      	           
      	        }
      	         else {
      	            	cout<<" please the required amount";
      	            }
      	            break;
	    case 5: cout<<"\n You are vying for the post of welfare\n";
      	         cout<<"Enter the amount you paid for: ";
      	         cin>>amount;
      	         if(amount==2000)
      	         {
      	         	cout<<" Enter your cgpa";
      	        	cin>>cgpa;
      	        	if(cgpa>=2.5)
      	        	{
      	        		cout<<" You are qualified for the post\a\a";
      	        	}
      	            else {
      	            	cout<<" You are not qualified for the post\a\a";
      	            }
      	           
      	        }
      	         else {
      	            	cout<<" please the required amount";
      	            }
      	            break;
		default: cout<<"\n Please enter the valid post within the range\n";			
      	
      	
      	
      }
      
	
	
	
	
	
	
	
	
	
}
