#include <stdio.h>
int main(){
	int choice;
	
	// declare choices for purchasing data bundles
	printf("Mobile Data bundles\n");
	printf("1.100MB @ 50 KES\n");
	printf("2.500MB @ 200 KES\n");
	printf("3.1GB @ 350 KES\n");
	printf("4.2GB @ 600 KES\n");
	
	printf("Enter your choice (1-4):");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("You selected 100MB.Cost:50KES\n");
			break;
		case 2:
			printf("You selected 500MB.Cost:200KES\n");
			break;
		case 3:
			printf("You selected 1GB.Cost:350KES\n");
			break;
		case 4:
			printf("You selected 2GB.Cost:600KES\n");
			break;
		default:
			printf("Invalid choice.Enter 1-4\n");
			break;
	}
	return 0;
}
	