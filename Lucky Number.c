#include <stdio.h>

int isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return 0;
        }
        num /= 10;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int luckyNumbers[] = {
        4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777
    };
    int countLuckyNumbers = sizeof(luckyNumbers) / sizeof(luckyNumbers[0]);
    int isAlmostLucky = 0;
    for (int i = 0; i < countLuckyNumbers; i++) {
        if (n % luckyNumbers[i] == 0) {
            isAlmostLucky = 1;
            break;
        }
    }
    if (isAlmostLucky) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
