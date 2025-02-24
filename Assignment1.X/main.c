/*
 * File:   main.c
 * Author: mattia
 *
 * Created on February 23, 2025, 11:17 AM
 */


#include "xc.h"


int main(void) {
    TRISA =  0x0000;
    while(1){
        LATA = 0X0001;
    }
    return 0;
}
