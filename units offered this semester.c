//Units offered this semester:5

# include<stdio.h>

int main(){
    //declare units offered this semester
    int units=5;
    char unit_one[30]="Introduction to programming";
    char unit_two[20]="Data structures";
    char unit_three[20]="Database systems";
    char unit_four[20]="Computer networks";
    char unit_five[25]="software engineering";
    
    //prompt user to enter the unit number
    printf("Enter units offered this semester:\n");
    printf("1.%s\n",unit_one);
    printf("2.%s\n",unit_two);
    printf("3.%s\n",unit_three);
    printf("4.%s\n",unit_four);
    printf("5.%s\n",unit_five);
    
    return 0;
}
