#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>


struct activity{
	char a[50];
 time_t time ;
}perform;

struct activity data[100] ;
int depositeAmount(int);
int WithdrawAmount(int);
bool  isInsufficientBalance(void);
void DateAndTime(void);
double displayTransection(void);
void updateUserActivity(char[],time_t);
int i=0;
int choise;
double TotalBalance=0;
double withdrawal;
double deposite;
time_t t;
	
int main()
{
	while(1){
	
	printf("################ Welcom to state bank of india ATM ############################ \n");
	printf("\n ************* Select any one of the following options ************\n");
	
	printf(" press 1. for deposite Amount \n");
		printf(" press 2. for check Balance \n");
			printf(" press 3. for withdrawal\n");
				printf(" press 4. mini statement\n");
					printf(" press 5. for exit\n");
					
					printf("\n#####################################################################\n");
					
				scanf("%d",&choise);
				
				switch(choise){
					case 1:
					
						printf("enter deposite amount\n");
						scanf("%lf",&deposite);
						printf("your deposite amount is %lf\n",deposite);
						depositeAmount(deposite);
						printf("your total amount is %lf\n ",TotalBalance);
						DateAndTime();
						updateUserActivity((char *)"deposite",t);
					
						
						break;
						
						case 2:
							printf("Your final balance is %lf\n",TotalBalance);
							DateAndTime();
							updateUserActivity((char *)"checkBalance",t);
							
							break;
							
							case 3:
								
						
							printf("enter withdrawal amount\n");
						scanf("%lf",&withdrawal);
						if( isInsufficientBalance()){
							printf("your Withdrawal amount is %lf\n",withdrawal);
						
						WithdrawAmount(withdrawal);
						printf("your total amount is %lf\n ",TotalBalance);
						DateAndTime();
						updateUserActivity((char *)"withdraw",t);
			
					}
					else{
						printf("sorry, insufficient Balance\n");
					}
						break;
						
						case 4:
							displayTransection();
							break;
							
							case 5:
								return 0;
								default:
									for(i = 0; i<1; i++) {  
      									printf("Arr[%d] = %d,  ", i, data[i].a);  
   										} 
									printf("there is no such choice\n");
						
			
							
			
						
				}	
}
return 0;
}

bool isInsufficientBalance(){
	
	if(withdrawal<=TotalBalance){
		return true;
	}
	return false;
}

int depositeAmount(int deposite)
{
	
	TotalBalance=TotalBalance+deposite;
	return TotalBalance;
}

int WithdrawAmount(int withdrawal)
{
	TotalBalance = TotalBalance-withdrawal;
	return TotalBalance;
}

void DateAndTime()
{
		
		time(&t);
		printf("(date and time): %s", ctime(&t));
		
	
}

void updateUserActivity(char name[] , time_t dateTime){
	//data[i].a=name;
	
	strncpy(data[i].a, name, 50);
	data[i].time=dateTime;
	i++;
}

double displayTransection()
{
	int j=0;
for(j;j<3;j++){
	printf("activity performed is %s\n, time was %d\n",perform.a,perform.time);
	
}
}

