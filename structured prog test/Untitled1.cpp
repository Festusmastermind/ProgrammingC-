#include<stdio.h>
void inputfile(int i);
void outputfile(int i);

//laying the structures 

struct cust_rec{
	char cust_name[20];
	char cust_sex;
	char cust_id[12];
	char cust_address[20];

}; 

struct ATM_change{
	struct cust_rec cust_particuler;
	char card_type; // v=verve , i= visa ,m = master card 
	char card_request_type; // new = N, lost = L
}ATM_cust[50];
 
 // main program begins 
 
 main()
 {
 	for(int j=1;j<=50;j++)
 	{
 		inputfile(j);
 		
 	}
 	
 	
 	printf("\t\t\t ATM CUSTOMER COMPAINT SERVICES \n");
 		printf("\t\tCUSTOMER NAME \t\tCUSTOMER SEX\t\tCUSTOMER ID\t\tCUSTOMER ADDRESS\t\t ");
 	
 	for(int k=1;k<=50;k++)
 	{
 		outputfile(k);
 	}
 	
 }
 
 // defining function 
 // inputing functions
 
   void inputfile(int i)
 {
 	printf("\n enters for ATM customers %i",i);
 	
 	scanf("%c",&ATM_cust.cust_particuler.cust_name[i]);
 	scanf("%c",&ATM_cust.cust_particuler.cust_sex[i]);
 	scanf("%c",&ATM_cust.cust_particuler.cust_id[i]);
 	scanf("%c",&ATM_cust.cust_particuler.cust_address[i]);
 	scanf("%c",&ATM_cust.card_type[i]);
 	scanf("%c",&ATM_cust.card_request_type[i]);
 }
 return;
 
 // defining function 
 // outputing functions
  void inputfile(int i)
 {
 	printf("\n outputing  for ATM customers %i",i);
 	
 	printf("%c",ATM_cust.cust_particuler.cust_name[i]);
 	printf("%c",ATM_cust.cust_particuler.cust_sex[i]);
	printf("%c",ATM_cust.cust_particuler.cust_id[i]);
 	printf("%c",ATM_cust.cust_particuler.cust_address[i]);
 	printf("%c",ATM_cust.card_type[i]);
 	printf("%c",ATM_cust.card_request_type[i]);
 }
 return;
