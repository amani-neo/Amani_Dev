#include<stdio.h>
int main(){
	float balance = 10000;
	float amount;
	
	printf("starting balance:%.2f\n",balance);
	
	while (balance>0){
		printf("Enter amount to withdraw:");
		scanf("%f", &amount);
		
		balance= balance-amount;
		printf("Balance after withdrawal:%.2f\n",balance);
	}
	printf("Balance is zero.No more withdrawals.\n");
	
	return 0;
	
	}