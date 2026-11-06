#include <stdio.h>

int calculateDiscount(char user_type, int initial_amount);
int calculateFinalbill(int amount);

int main() {
    int initial_amount, final, amount, discount;
    char user_type;
    printf("Enter the user initial amount :");
    scanf("%d", &initial_amount);
    printf("Enter the user type :");
    scanf(" %c", &user_type);
    discount = calculateDiscount(user_type, initial_amount);
    amount = initial_amount - discount;
    final = calculateFinalbill(amount);
    printf("Final amount is :%d", final);
    return 0;
}

int calculateDiscount(char user_type, int initial_amount) {
    int disc_amount;
    if (user_type == 'P') {
        disc_amount = initial_amount * 0.20;
    }
    else if (user_type == 'G') {
        disc_amount = initial_amount * 0.10;
    }
    else {
        disc_amount = initial_amount * 0.05;
    }
    if (initial_amount > 10000) {
        disc_amount = disc_amount + initial_amount * 0.02;
    }
    return disc_amount;
}

int calculateFinalbill(int amount) {
    amount = amount + amount * 0.15;
    if (amount <= 5000) {
        amount = amount + 300;
    }
    return amount;
}
