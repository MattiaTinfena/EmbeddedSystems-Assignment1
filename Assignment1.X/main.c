/*
 * File:   main.c
 * Author: mattia
 *
 * Created on February 24, 2025, 9:43 AM
 */

#include "xc.h"

 int main(void) {
     ANSELA = ANSELB = ANSELC = ANSELD = ANSELE = ANSELG = 0x0000;
     
     TRISA = 0x0000;
     TRISE = 0xFFFF;
     
     while(1){
         if(!PORTEbits.RE8){
             LATA = 0x0001;
         } else{
             LATA = 0x0000;
         }
     }
     return 0;
 }