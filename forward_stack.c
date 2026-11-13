
#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = value;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Enter a number between 0 and 20.\n");
        return 0;
    }

    
    for (i = 1; i <= n; i++) {
        push(i);
    }

    
    while (top != -1) {
        int num = pop();
        fact = fact * num;
        printf("Factorial step: %llu\n", fact);
    }

    printf("%d! = %llu\n", n, fact);

    return 0;
}
