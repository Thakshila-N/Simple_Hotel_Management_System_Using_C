#include<stdio.h>

void paym(int total);
int meal(int amount);
int room();

int amount,amount1,total1,total;


void infor(){
	
	struct cust{
		
		char fname[20];
		char lname[20];	
		char gender[6];
		int tel;
		char mail[20];
		char nic[15];
		char date[12];
	};
	
	struct cust custer1;
	
	printf("\n\t1. FIRST NAME        : ");
	scanf("%s",&custer1.fname);
	
	printf("\t2. LAST NAME         : ");
	scanf("%s",&custer1.lname);
	
	printf("\t3. GENDER            : ");
	scanf("%s",&custer1.gender);
	
	printf("\t4. MOBILE NUMBER     : ");
	scanf("%d",&custer1.tel);
	
	printf("\t5. E-MAIL ADDRES     : ");
	scanf("%s",&custer1.mail);

	printf("\t6. NIC/PASSPORT NO.  : ");
	scanf("%s",&custer1.nic);
	
	printf("\t7. DATE              : ");
	scanf("%s",&custer1.date);
	
	printf("\n\n\n");
	
	main();
	
}

int room(){
	int a;
	
	printf("\nROOM NUMBER:        ROOM TYPE:        STATUS:        AVAILABILITY:        CHARGE:\n");
	printf("\n   101               standerd           A/c              yes                25,000 \n ");
	printf("  102               standerd           A/c              yes                25,000 \n ");
	printf("  103               family             A/c              yes                30,000 \n ");
	printf("  104               family             A/c              yes                30,000 \n ");
	printf("  105               honeymoon          A/c              yes                35,000 \n ");
	
	printf("\nEnter the room number : ");
	scanf("%d",&a);
	printf("\n");
	
	if(a==101){
		amount=25000;
		
		printf("\t\t\tFEATURES OF THIS ROOM\n");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("\n");
		printf("  Room Type            >>> Standerd\n");
		printf("  Room Charge          >>> Rs. 25,000 per One Night\n ");
		printf(" Bed                  >>> 1\n");
		printf("  Capacity             >>> 2\n");
		printf("\n");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("\t\t\tEDDITIONAL FEATURES\n");
	    printf("--------------------------------------------------------------------------------------------\n");
	    printf("\n");
		printf("\t1. TV Available\n\t2. Geyser Available\n");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("\nNOTE :- Extra Bed Will Cost Rs. 50.00 per Bed.\n");
		printf("\n");	
	}
	
	else if(a==102){
		amount=25000;
		
		printf("\t\t\tFEATURES OF THIS ROOM\n");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("\n");
		printf("  Room Type            >>> Standerd\n");
		printf("  Room Charge          >>> Rs. 25,000 per One Night\n ");
		printf(" Bed                  >>> 1\n");
		printf("  Capacity             >>> 2\n");
		printf("\n");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("\t\t\tEDDITIONAL FEATURES\n");
	    printf("--------------------------------------------------------------------------------------------\n");
	    printf("\n");
		printf("\t\t1. TV Available\n\t\t2. Geyser Available\n");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("\nNOTE :- Extra Bed Will Cost Rs. 50.00 per Bed.\n");
		printf("\n");
	}
	
		
	else if(a==103){
		amount=30000;
		
		printf("\t\t\tFEATURES OF THIS ROOM\n");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("\n");
		printf("  Room Type            >>> Family\n");
		printf("  Room Charge          >>> Rs. 30,000 per One Night\n ");
		printf(" Bed                  >>> 2\n");
		printf("  Capacity             >>> 4\n");
		printf("\n");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("\t\t\tEDDITIONAL FEATURES\n");
	    printf("--------------------------------------------------------------------------------------------\n");
	   	printf("\n");
		printf("\t\t1. TV Available\n\t\t2. Geyser Available\n\t\t3. Living Room\n");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("\nNOTE :- Extra Bed Will Cost Rs. 50.00 per Bed.\n");
		printf("\n");
	}
	
		
	else if(a==104){
		amount=30000;
		
		printf("\t\t\tFEATURES OF THIS ROOM\n");
		printf("-------------------------------------------------------------------------------------------\n");
		printf("\n");
		printf("  Room Type            >>> Family\n");
		printf("  Room Charge          >>> Rs. 30,000 per One Night\n ");
		printf(" Bed                  >>> 2\n");
		printf("  Capacity             >>> 4\n");
		printf("\n");
		printf("------------------------------------------------------------------------------------------\n");
		printf("\t\t\tEDDITIONAL FEATURES\n");
	    printf("------------------------------------------------------------------------------------------\n");
	    printf("\n");
		printf("\t\t1. TV Available\n\t\t2. Geyser Available\n\t\t3. Living Room\n");
		printf("------------------------------------------------------------------------------------------\n");
		printf("\nNOTE :- Extra Bed Will Cost Rs. 50.00 per Bed.\n");
		printf("\n");
	}
	
		
	else{
	
		amount=35000;
		
		printf("\t\t\tFEATURES OF THIS ROOM\n");
		printf("-----------------------------------------------------------------------------------------\n");
		printf("\n");
		printf("  Room Type            >>> Honeymoon\n");
		printf("  Room Charge          >>> Rs. 35,000 per One Night\n ");
		printf(" Bed                  >>> 1\n");
		printf("  Capacity             >>> 2\n");
		printf("\n");
		printf("-----------------------------------------------------------------------------------------\n");
		printf("\t\t\tEDDITIONAL FEATURES\n");
	    printf("-----------------------------------------------------------------------------------------\n");
	    printf("\n");
		printf("\t\t1. TV Available\n\t\t2. Geyser Available\n\t\t3. Mini Refrigerator Available\n");
		printf("-----------------------------------------------------------------------------------------\n");
		printf("\nNOTE :- Extra Bed Will Cost Rs. 50.00 per Bed.\n");
		printf("\n");
	}
	
	
	
    printf("\tCurrent amount is   : %d",amount);
	printf("\n\n\n");
	main();
	
	return amount;
}



int meal(int amount){
	
	int b;
	
	printf("\n\t\tNo.1 Bed & Breakfast\n\t\tNo.2 Half Board\n\t\tNo.3 Full Board\n\t\tNo.4 Room Only\n\n");
	printf("Please Select Your Meal Plan...");
	scanf("%d",&b);
	printf("\n");
	
	if(b==1){
		amount1=1000;
		
		printf("-----------------------------------------------------------------------------------------\n");
		printf("\t\t\t\t\tMEAL DETAILS\n");
		printf("-----------------------------------------------------------------------------------------\n");
		printf("\n\t\t1. Bed Tea\n\t\t2. Breakfast buffet\n\t\t  * Stream hoppers\n\t\t  * Hoppers\n\t\t  * Milk rice\n\t\t  * Rice & Curry\n\t\t3. Dessert\n\t\t  * Wtalappan\n\t\t  * Fruits\n ");
		
	}
	
	else if(b==2){
		amount1=3500;
			
		printf("-----------------------------------------------------------------------------------------\n");
		printf("\t\t\t\t\tMEAL DETAILS\n");
		printf("-----------------------------------------------------------------------------------------\n");
		printf("\n\t\t1. Bed Tea\n\t\t2. Breakfast buffet\n\t\t  * Stream hoppers\n\t\t  * Hoppers\n\t\t  * Milk rice\n\t\t  * Rice & Curry\n\t\t3. Lunch buffet\n\t\t  * Fried rice\n\t\t  * Rice & Curry\n\t\t4. Dessert\n\t\t  * Wtalappan\n\t\t  * Fruits\n\t\t  * Ice cream\n ");
	}
	

		else if(b==3){
		amount1=4500;
			
		printf("-----------------------------------------------------------------------------------------\n");
		printf("\t\t\t\t\tMEAL DETAILS\n");
		printf("-----------------------------------------------------------------------------------------\n");
		printf("\n\t\t1. Bed Tea\n\t\t2. Breakfast buffet\n\t\t  * Stream hoppers\n\t\t  * Hoppers\n\t\t  * Milk rice\n\t\t  * Rice & Curry\n\t\t3. Lunch buffet\n\t\t  * Fried rice\n\t\t  * Rice & Curry\n\t\t4. Dinner Buffet\n\t\t5. Dessert\n\t\t  * Wtalappan\n\t\t  * Fruits\n\t\t  * Ice cream\n ");
	}
	
	  else{
	  	amount1=0;
	  	
	  }
	  
	  int total1=amount+amount1;
	  printf("\n\tcurrent amount is  : %d",total1);
		total=total1;
	  
	  printf("\n\n\n");
	  main();
	  
	  return total;
	
}

void paym(int total){
	
	int c,d,rest;
	
	
	
	
	
	printf("\n\t\t1. Card Payment\n\t\t2. Cash Payment\n\n");
	
	printf("\tWhat Is Your Payment Method  : ");
	scanf("%d",&c);
	
	printf("\n\tTotal Payment is : %d\n",total);
	
	printf("\n\tAdvance Payment : ");
	scanf("%d",&d);
	
	rest=total-d;
	
	printf("\n\tRest Amount is : %d\n\n\n",rest);
	
	
	printf("\t\t\t   <<<<<<YOUR ROOM BOOKING IS COMPLETED>>>>>>\n");
	printf("\t\t\t                   THANK YOU!!!\n\n");
	

	
}






int main(){
	
	
	printf("\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("\t\t\t\t@::::::::::::::::::::::::::::::::::::::::::@\n");
	printf("\t\t\t\t@                                          @\n");
	printf("\t\t\t\t@              W E L C O M E               @\n");
	printf("\t\t\t\t@                   T O                    @\n");
	printf("\t\t\t\t@              T A I T A N S               @\n");
	printf("\t\t\t\t@                                          @\n");
	printf("\t\t\t\t@::::::::::::::::::::::::::::::::::::::::::@\n");
	printf("\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
	
	
	
	
	
	
	
	
	
	
	
	printf("\n");
	printf("\t\t\t\tNo. 1  PERSONAL INFORMATION\n\t\t\t\tNo. 2  ROOM DETAILS\n\t\t\t\tNo. 3  MEAL PLAN\n\t\t\t\tNo. 4  CUSTOMER PAYMENT\n");
	printf("\n");
	int menu;
	
	system("color f0");
	
	
	printf("Enter Menu Number : ");
	scanf("%d",&menu);
	printf("\n");
	
	switch (menu){
		
		case 1:
			
			printf("\n------------------------------------------------------------------------------------------------------------------------\n");
			printf("\n\t\t\t\t******************** PERSONAL INFORMATION ********************\n");
			printf("\n------------------------------------------------------------------------------------------------------------------------\n");
		    infor();
			break;
			
		case 2:
			printf("\n------------------------------------------------------------------------------------------------------------------------\n");
			printf("\n\t\t\t\t******************** ROOM DETAILS ********************\n");
			printf("\n------------------------------------------------------------------------------------------------------------------------\n");
            room();
			break;
			
		case 3:
			printf("\n------------------------------------------------------------------------------------------------------------------------\n");
			printf("\n\t\t\t\t******************** MEAL PLAN ********************\n");
			printf("\n------------------------------------------------------------------------------------------------------------------------\n");
		    meal(amount);
			break;
			
		case 4:
			printf("\n------------------------------------------------------------------------------------------------------------------------\n");
			printf("\n\t\t\t\t******************** CUSTOMER PAYMENT *********************\n");
			printf("\n------------------------------------------------------------------------------------------------------------------------\n");
		    paym(total);
			break;
			
			default:
				printf("\n\t\t\t\tSORRY TRY AGAIN !\n\n\n");
				main();
	}
	
	
}
