#include <stdio.h>

int add(int, int);
int multiply(int, int);
int findMax(int, int);
int compute(int, int, int (*operation)(int, int));

int main() {
    int num1,num2,i,sum,product,maximum;
    printf("Enter a number :");
    scanf("%d",&num1);
    printf("Enter a number :");
    scanf("%d",&num2);
    sum = compute(num1, num2, add);
    printf("sum :%d\n",sum);
    product = compute(num1, num2, multiply);
    printf("product :%d\n",product);
    maximum = compute(num1, num2, findMax);
    printf("maximum :%d",maximum);
    return 0;
}

int add(int num1, int num2){
    int sum;
    sum = num1 + num2;
    return sum;
}

int multiply(int num1,int num2){
    int product;
    product = num1 * num2;
    return product;
}

int findMax(int num1,int num2){
    int max;
    if (num1 > num2){
        max = num1;
    }
    else{
        max = num2;
    }
    return max;
}

int compute(int num1, int num2, int (*operation)(int,int)){
    return operation(num1,num2);
}
