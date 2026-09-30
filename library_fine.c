#include <stdio.h>

int main(void)
{
    int bookID, dueDate, returnDate;
    int daysOverdue, fineRate, fineAmount;

    /* i. Take inputs */
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    /* ii. Calculate days overdue */
    daysOverdue = returnDate - dueDate;

    /* iii. Determine fine rate with if...else */
    if (daysOverdue <= 0) {
        daysOverdue = 0;
        fineRate = 0;
    } else if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    fineAmount = daysOverdue * fineRate;

    /* iv. Display results */
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d per day\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}
