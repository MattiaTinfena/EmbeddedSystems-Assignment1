/*
 * File:   main.c
 * Author: Elisa
 *
 * Created on February 24, 2025, 9:43 AM
 */


#include "xc.h"
#include "stdbool.h"

int main(void) {
    ANSELA = ANSELB = ANSELC = ANSELD = ANSELE = ANSELG = 0x0000;
    
    TRISA = 0x0000;
    TRISE = 0xFFFF;
    
    bool toggle = false;
    int state = PORTEbits.RE8;
    int old_state = state;
    
    while(1){
        
        state = PORTEbits.RE8;
        
        if(PORTEbits.RE8 && state != old_state){
            toggle = !toggle;
        }   
        if(toggle){
            LATA = 0x0001;
        } else {
            LATA = 0x0000;
        }
        old_state = state;
    }
    
    return 0;
}
