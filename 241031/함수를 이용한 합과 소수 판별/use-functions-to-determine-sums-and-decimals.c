#include <stdio.h>
int get_num (int num1, int num2);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", get_num (a, b));
    return 0;
}

int get_num (int num1, int num2) {
    int cnt = 0;
    for (int i = num1; i <= num2; i++) {
        int num_1 = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                num_1++;
            }
        }
        int num_2 = 0;
        int k = i;
        while (1) {
            if (k == 0) {
                break;
            }
            num_2 += k % 10;
            k /= 10;
        }

        if (num_1 == 0 && num_2 % 2 == 0) {
            cnt++;
        }
    }
    return cnt;
}