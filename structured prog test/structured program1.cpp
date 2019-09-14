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
}ATM_cust[2];
 
 // main program begins 
 
 main()
 {
 		printf("\t\t\t ATM CUSTOMER COMPAINT SERVICES \n");
 	for(int j=1;j<=2;j++)
 	{
 		inputfile(j);
 		
 	}
 	
 	
 	printf("\t\t\t ATM CUSTOMER COMPAINT SERVICES \n");
 		printf("\t\tCUSTOMER NAME \t\tCUSTOMER SEX\t\tCUSTOMER ID\t\tCUSTOMER ADDRESS\t\t ");
 	
 	for(int k=1;k<=2;k++)
 	{
 		outputfile(k);
 	}
 	
 }
 
 // defining function 
 // inputing functions
 
   void inputfile(int i)
 {
 	printf("\n----> ENTER FOR ATM CUSTOMER NO: %i",i);
 	
 	printf("\n enters name :");
 	scanf("%s",&ATM_cust[i].cust_particuler.cust_name[i]);
 	
 	printf("\n enters sex :");
 	scanf("%s",&ATM_cust[i].cust_particuler.cust_sex);
 	
 	printf("\n enters ID: ");
 	scanf("%s",&ATM_cust[i].cust_particuler.cust_id[i]);
 	
 	printf("\n enters Address: ");
 	scanf("%s",&ATM_cust[i].cust_particuler.cust_address[i]);
 	
 	printf("\n enters Card type: ");
 	scanf("%s",&ATM_cust[i].card_type);
 	
 	printf("\n enters Card request Type: ");
 	scanf("%s",&ATM_cust[i].card_request_type);
 	
 	 
 }
 
 
 // defining function 
 // outputing functions
 
  void outputfile(int i)
 {
 	printf("\n outputing  for ATM customers %i",i);
 	
 	printf("%S %S %S %S %S %S",ATM_cust[i].cust_particuler.cust_name[i],ATM_cust[i].cust_particuler.cust_sex,ATM_cust[i].cust_particuler.cust_id[i],ATM_cust[i].cust_particuler.cust_address[i],ATM_cust[i].card_type,ATM_cust[i].card_request_type);
 	
 //	printf("%S",ATM_cust[i].cust_particuler.cust_name[i]);
 //	printf("%S",ATM_cust[i].cust_particuler.cust_sex);
//	printf("%S",ATM_cust[i].cust_particuler.cust_id[i]);
 //	printf("%S",ATM_cust[i].cust_particuler.cust_address[i]);
 //	printf("%S",ATM_cust[i].card_type);
 //	printf("%S",ATM_cust[i].card_request_type);
 }

