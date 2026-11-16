#include <stdio.h>

// 1. Define the Product structure
struct Product {
    int code;
    char name[50];
    float unitPrice;
    int quantity;
};

int main() {
    // 2. Declare a structure variable and input details
    struct Product p;
    float totalValue;

    printf("Enter product code: ");
    scanf("%d", &p.code);
    getchar(); // clear newline

    printf("Enter product name: ");
    fgets(p.name, sizeof(p.name), stdin);

    printf("Enter unit price: ");
    scanf("%f", &p.unitPrice);

    printf("Enter quantity in stock: ");
    scanf("%d", &p.quantity);

    // 3. Calculate total value of available stock
    totalValue = p.unitPrice * p.quantity;

    // 4. Display product details and total stock value
    printf("\n--- Product Details ---\n");
    printf("Product Code: %d\n", p.code);
    printf("Name: %s", p.name);
    printf("Unit Price: %.2f\n", p.unitPrice);
    printf("Quantity in Stock: %d\n", p.quantity);
    printf("Total Stock Value: %.2f\n", totalValue);

    return 0;
}