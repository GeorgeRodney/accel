#include "led.hpp"

int main()
{
    stdio_init_all();

    led light(16);

    while(1)
    {
        light.set(true);
        sleep_ms(500);
        light.set(false);
        sleep_ms(500);
    }

}