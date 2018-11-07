#include<stdint.h>

// Warteschleife

int main(void) {
    uint32_t* address_RCGCGPIO;
    // Adresse RCGCGPIO Register
    address_RCGCGPIO =  (uint32_t*) 0x400FE608;
    *address_RCGCGPIO = *address_RCGCGPIO | (0x06);
    while(1) {
        *address_GPIO_DATA =  (0x04);
        delay();
    }
}