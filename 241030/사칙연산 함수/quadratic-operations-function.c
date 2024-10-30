#include <stdio.h>
int get_math(int num1, char math, int num2);

int main() {
    int a, c;
    char o;
    scanf("%d %c %d", &a, &o, &c);
    if (o == '+' || o == '-' || o == '/' || o == '*') {
        printf("%d %c %d = %d", a, o, c, get_math(a, o, c));
    }
    else {
        printf("False");
    }
    return 0;
}

int get_math(int num1, char math, int num2) {
    if (math == '+') {
        return num1 + num2;
    }
    else if (math == '-') {
        return num1 - num2;
    }
    else if (math == '/') {
        return num1 / num2;
    }
    else if (math == '*') {
        return num1 * num2;
    }
}