#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "ChipConfig.h"
#include "IO.h"
#include "timer.h"
#include "PWM.h"

#define B14 OUTPUT
#define B15 OUTPUT


int main(void) {
    
    
    /***************************************************************************************************/
    //Initialisation de l'oscillateur
    /****************************************************************************************************/
    InitOscillator();

    /****************************************************************************************************/
    // Configuration des entr�es sorties
    /****************************************************************************************************/
    InitIO();
    InitTimer1();
    InitTimer23();
    InitPWM();
    

    LED_BLANCHE = 1;
    LED_BLEUE = 1;
    LED_ORANGE = 1;

    float acceleration = 2;
    
    PWMSetSpeedConsigne(50, MOTEUR_GAUCHE);
    PWMSetSpeedConsigne(-20, MOTEUR_DROIT);
    /****************************************************************************************************/
    // Boucle Principale
    /****************************************************************************************************/
    while (1) {
         
//        LED_BLANCHE = !LED_BLANCHE;
//        LED_BLEUE = !LED_BLEUE;
//        LED_ORANGE = !LED_ORANGE;

    } // fin main
}