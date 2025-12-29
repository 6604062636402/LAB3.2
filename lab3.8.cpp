#include <stdio.h>

int main() {
    int hour, minute, second;
    int nextMin;

    scanf("%d:%d:%d", &hour, &minute, &second);
    printf("Hour:%d\n", hour);
    printf("Minute:%d\n", minute);
    printf("Second:%d\n", second);
  
    scanf("%d", &nextMin);
    minute += nextMin;
    hour += minute / 60;
    minute = minute % 60;
    hour = hour % 24;

    printf("Hour:%d\n", hour);
    printf("Minute:%d\n", minute);
    printf("Second:%d\n", second);

    return 0;
}

