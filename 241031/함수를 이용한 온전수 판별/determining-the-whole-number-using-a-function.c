#include <stdio.h>
int get_num(int num1, int num2);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", get_num(a, b));
    return 0;
}

int get_num(int num1, int num2) {
    int cnt = 0;
    for (int i = num1; i <= num2; i++) {
        if (i % 10 == 5 || i % 2 == 0 || (i % 3 == 0 && i % 9 != 0)) {
            continue;
        }
        else {
            cnt++;
        }
    }
    
    return cnt;
}