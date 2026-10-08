# include <stdio.h>
# include <math.h>

int main(){
	double length,width,diagonal;
	
	// prompt the user
	printf("Enter the length of the window:\n");
	scanf("%lf",&length);
	printf("Enter the width of the window:\n");
	scanf("%lf",&width);
	
	//formula
	diagonal = sqrt(pow(length, 2) + pow(width, 2));
	
	// display to two decimal
	printf("Length = %.2f\n",length);
    printf("Width = %.2f\n",width);
    printf("Diagonal = %.2f\n",diagonal);
    
    return 0;
}
	
	