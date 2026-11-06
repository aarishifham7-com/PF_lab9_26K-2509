#include <stdio.h>

void withdraw(int *bal, int amount);
void deposit(int *bal, int amount);

int main(){
    int balance,amount,type;
    int *bal;
    printf("Enter the balance :");
    scanf("%d",&balance);
    bal = &balance;
    printf("Enter the amount you wanted to withdraw or deposit :");
    scanf("%d",&amount);
    printf("Enter the type 0 if you want to credit 1 if you want to debit :");
    scanf("%d",&type);
    if (type == 1){
        withdraw(bal,amount);
    }
    else{
        deposit(bal,amount);
    }
    printf("The balance is :%d",*bal);
    return 0;
}

void withdraw(int *bal,int amount){
    if (amount <= *bal){
        *bal = *bal - amount;
        printf("Successful withdrawl\n");
    }
    else{
        printf("Unsuccessful withdrawl insufficent amount\n");
    }
}

void deposit(int *bal,int amount){
    *bal = *bal + amount;
    printf("The balance is :%d\n", *bal);
}
