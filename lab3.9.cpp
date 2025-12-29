#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);

    switch (month) {
        case 12:
        case 11:
        case 1:
        case 2:
            printf("Winter");
            break;

        case 3:
        case 4:
        case 5:
            printf("Summer");
            break;

        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("Rainy");
            break;

        default:
            printf("Invalid");
    }

    return 0;
}

