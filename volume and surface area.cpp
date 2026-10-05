# include <stdio.h>
# define PI 3.14159265

int main (){
	float radius,height,volume,surface;
	
	printf("Enter the radius:\n");
	scanf("%f",&radius);
	printf("Enter the height:\n");
	scanf("%f",&height);
	
	volume=PI*radius*radius*height;
	surface=2*PI*radius*radius+2*PI*radius*height;
	
	printf("volume=%.2f\n",volume);
	printf("surface area = %.2f\n",surface);
	
	return 0;
}