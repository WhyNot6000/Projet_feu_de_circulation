#include <Arduino.h>
#include <freertos/FreeRTOS.h>
#include <freertos/queue.h>
#include <freertos/semphr.h>
#include "LED/led.h"
#include "Bouton/bouton.h"


LED RougeEST(18);
LED JauneEST(19);
LED VertEST(20);
LED FlecheEST(21);
LED RougeSUD_NORD(22);
LED JauneSUD_NORD(23);
LED VertSUD_NORD(24);

BOUTON PietonSUD(7);
BOUTON PietonEST(6);
BOUTON PietonNORD(5);
BOUTON PietonOUEST(4);
BOUTON VoitureSUD(3);
BOUTON VoitureEST(2);
BOUTON VoitureNORD(1);
BOUTON VoitureOUEST(0);
LED PietonSUD(17);
LED PietonEST(16);
LED PietonNORD(15);
LED PietonOUEST(14);
LED RougeOUEST(13);
LED JauneOUEST(12);
LED VertOUEST(11);
LED FlecheOUEST(10);

//addition des notifications*
void vtaskBoutonReception(void *) {

    bool PietonSUDEtat = PietonSUD.LECTURE();
    bool PietonESTEtat = PietonEST.LECTURE();
    bool PietonNORDEtat = PietonNORD.LECTURE();
    bool PietonOUESTEtat = PietonOUEST.LECTURE();

    bool VoitureSUDEtat = VoitureSUD.LECTURE();
    bool VoitureESTEtat = VoitureEST.LECTURE();
    bool VoitureNORDEtat = VoitureNORD.LECTURE();
    bool VoitureOUESTEtat = VoitureOUEST.LECTURE();
}

void setup(){


}

