#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    char op;
    double result;

    printf("Enter an expression (e.g. 10 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+': printf("Result: %d\n", a + b); break;
        case '-': printf("Result: %d\n", a - b); break;
        case '*': printf("Result: %d\n", a * b); break;
        case '/': 
            if (b != 0)
                printf("Result: %d\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;
        case '^': printf("Result: %.2lf\n", pow(a, b)); break;
        default: printf("Invalid operator\n");
    }
   
    printf("Enter hex expression (e.g. A + F): ");
    scanf("%x %c %x", &a, &op, &b);

    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b != 0)
                result = a / b;
            else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("Result in hex: %X\n", result);

    return 0;
}
