#include "mbed.h"
DigitalIn button(D2);

int main (void) { 
    int cnt = 0;
    while(1) {
        if (button) {
            cnt++;
            printf("Touch detected %d\n", cnt);
            while(button);
        }
    }
}