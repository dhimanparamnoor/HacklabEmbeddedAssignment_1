#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define GREEN 0
#define YELLOW 1
#define RED 2

void delay(int seconds) {
    sleep(seconds);
}

int main() {
    int state = GREEN;
    int waitTime = 0;

    while (1) {
        switch (state) {
            case GREEN:
                printf("Green light - Go!\n");
                waitTime = 360;
                delay(waitTime);
                state = YELLOW;
                break;

            case YELLOW:
                printf("Yellow light - Prepare to stop!\n");
                waitTime = 10;
                delay(waitTime);
                state = RED;
                break;

            case RED:
                printf("Red light - Stop!\n");
                waitTime = 120;
                delay(waitTime);
                state = GREEN;
                break;
        }
    }

    return 0;
}
