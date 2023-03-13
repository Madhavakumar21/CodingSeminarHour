// Let's assume you are an ethical Hacker.
// One of your Client has a Digital Locker (function) which will print the
//          secret message only if the correct 4-digit PIN is given as the argument.
// But unfortunately, he forgot the PIN number.
// So, He has approached your company to find
//          the correct PIN and the secret message for him.
// Develop a Hacking Algorithm in the main function to serve the purpose.


#include <stdio.h>
#include <stdint.h>


int open_digital_locker(uint16_t pin)
{
    if(pin == 0x7E7)
    {
    //if((pin & 0xF == 0b111) && ((pin >> 0x4) & 0xF == 0b1110) && ((pin >> 0x8) & 0xF == 0b111) && ((pin >> 0xC) & 0xF == 0b0))
        printf("\n");
        for(int i = 0; i < 60; i++) printf("*");
        printf("\n");
        char msg[60 + 1] = "GYWfYhAYggU[Y.=b7 IbXYfghUbXh\\Y`c[]WUbXXch\\YaU[]W\"";
        for(int i = 0; i < 60; i++) printf("%c", msg[i] + 12);
        printf("\n");
        for(int i = 0; i < 60; i++) printf("*");
        printf("\n");

        return 1;
    }
    
    printf("Wrong PIN!!\n");

    return 0;
    
}


int main()
{
    uint16_t pin_guess = 1234;

    open_digital_locker(pin_guess);

    return 1;
}

