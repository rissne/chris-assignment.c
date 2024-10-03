//Program to calculate FineAmount in the library
/*
program to calcuate FineAmount in the library
Author:Mugendi Denzel
Reg no:CT101/G/24518/24
Date:2/10/2024
*/
//preprocessor directive-printf(),scanf()

#include<stdio.h>

int main(){
	;int BookID //%d
	;int DueDate //%d
	;int ReturnDate//%d
	;float Overdue //%f
	;float FineAmount//%f
	
	;printf("Enter the BookID:");
	scanf("%d",&BookID);
	printf("The BookID is \t %d \n",BookID);
	
	printf("Enter the DueDate:");
	scanf("%d",&DueDate);
	printf("The Due Date is \t %d \n",DueDate);
	
	printf("Enter the ReturnDate:");
	scanf("%d",&ReturnDate);
	printf("The ReturnDate is \t %d \n",ReturnDate);
	
	Overdue =(ReturnDate-DueDate);
	printf("The Overdue is:%.1f \n",Overdue);
	
	
	if(Overdue <=7){
	FineAmount=Overdue*20;
	printf("The FineAmount is:%.1f \n",FineAmount);}
	
	
    
	  else if(Overdue<=14){
    ;FineAmount=Overdue*50
    ;printf("The Charges is:%.1f \n",FineAmount);}
    
    
  
      else{
	  (Overdue>=15);
    FineAmount=Overdue*100;
    printf("The Charges is:%.1f \n",FineAmount);}
 
	return 0;
}
	
