#include <iostream>
using namespace std;
main()
// this section of the program compute the matric no of only the last two students of the department
{
    int mat_no=130404000;
// Hint that the last two matric no are the 101 and 102
    cout<<"\n\t THE LAST TWO STUDENTS MATRIC NO ARE: "<<endl;
    cout<<"\n S/N \tMATRIC NO" <<endl;
	// using for statement for the loop  
    for(int i=101; i<=102; i++)
    { 
        cout<<" "<<i<<"\t"<<mat_no+i<<endl;     
    }
}
