#include <Arduino.h>
int i=0,j=0,g=0, Puls=8; 
volatile int apretado;
void ISR_Boton();
int sec [7][7]={
    {1,0,0,0,0,0,0},
    {0,1,0,0,0,0,0},
    {0,0,1,0,0,0,0},
    {0,0,0,1,0,0,0},
    {0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0},
    {0,0,0,0,0,0,1}
    };    
void setup(){
    for(i=0;i<8;i++){
        pinMode(i, OUTPUT);
    }
    pinMode(Puls, INPUT);
    attachInterrupt(digitalPinToInterrupt(Puls),ISR_Boton,RISING);
}
void loop(){
    unsigned long int tiempoActual=millis();
    for(g=0;g<8;g++){
        for(j=0;j<8;j++){
                digitalWrite(sec[g][j]);
                        }
                    }
            }