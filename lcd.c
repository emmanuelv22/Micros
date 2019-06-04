#include <16f85a.h> //biblioteca
#use delay(clock=4000000) //velocidad del cristal
#fuses NOPROTECT,NOPUT,NOWDT,XT //fusibles internos
#use fast_io(B) //declara rapido cambios de memoria
#define use_portb_lcd TRUE
#include <lcd.c> //B0 es E; B1 es RS; B2 es RW

//al hacer un click sobre los pines ra0 y ra1 se escribe algo
void main(){

    set_tris_B(0x00) //todos los pines de B como salida
    lcd_init(); //iniciar lcd
    delay_ms(200);

    while(true){
        if(!input(pin_a0)){
            lcd_gotoxy(1,1);
            printf(lcd_putc,"Algo");
            delay_ms(500);
        }
        if(!input(pin_a1)){
            lcd_gotoxy(1,1);
            printf(lcd_putc,"Algo x2");
            delay_ms(500);
        }
    }
}
