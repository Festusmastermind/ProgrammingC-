#include <iostream>
#include <string.h>
using namespace std;

main ()
{
  int csc212studtest[20];
  int csc212studexam[20];
  int csc212avg[20];
  int csc212tot[20];
  string csc212rem[20];
  
  for(int i=0;i<20;i++)
  {
   cout<<"\n Enter student "<<i+1<<" test score ";
   cin>>csc212studtest[i];
   cout<<"\n Enter student "<<i+1<<" exam score ";
    cin>>csc212studexam[i];
}
for(int b=0; b<20; b++)
{
   csc212tot[b] = csc212studtest[b] + csc212studexam[b];
   cout<<"\n "<<csc212tot[b];
   csc212avg[b] = csc212tot[b] / 2;
   cout<<"\n "<<csc212avg[b]; 
if (csc212tot[b] < 40)
{
csc212rem[b] = "FAILED";
cout<<"\n" <<csc212rem[b]<<"\n";
}
else
{
csc212rem[b]= "PASSED";
cout<<"\n" <<csc212rem[b]<<"\n";
}
}
return 0;
}
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
  
