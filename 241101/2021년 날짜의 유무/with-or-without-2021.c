#include <stdio.h>
int get_day (int num1, int num2);

int main() {
    int m, d;
    scanf("%d %d", &m, &d);
    if (get_day(m, d) == 1) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}

int get_day (int num1, int num2) {
    int cnt = 0;
    if (num1 == 1 || num1 == 3 || num1 == 5 || num1 == 7 || num1 == 8 || num1 == 10 || num1 == 12) {
        if (num2 <= 31) {
            cnt = 1;
        }
    }
    else if (num1 == 2) {
        if (num2 <= 28) {
            cnt += 1;
        }
    }
    else {
        if (num2 <= 30) {
            cnt += 1;
        }
    }
    return cnt;
}