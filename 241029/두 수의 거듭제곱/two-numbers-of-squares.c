#include <stdio.h>
int get_times(int num1, int num2);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", get_times(a, b));
    return 0;
}

int get_times(int num1, int num2) {
    int k = 1;
    for (int i = 1; i <= num2; i++) {
        k *= num1; 
    }

    return k;
}