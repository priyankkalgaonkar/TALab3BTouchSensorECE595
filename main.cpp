#include "mbed.h"

DigitalOut buzzer(D2);
DigitalOut led_green(LED_GREEN);
InterruptIn sw2(SW2);

void sw2_release(void)
{
    led_green = !led_green;
    buzzer = !buzzer;
    
    printf("On-board button SW2 was released.\n");
}

int main()
{
    sw2.rise(&sw2_release);
    while (true) {
    }
}