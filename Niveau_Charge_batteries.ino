/******************************************
 * 
 * Exemple niveau de Charge Batteries lithium
 * 
 ******************************************/

#include "Rico0260_ChargeLevel.h"

double c = 3.200;

// Niveau charge batterie
Rico0260_ChargeLevel niveauCB;

void setup() {

  Serial.begin(115200);
  delay(1000);
  Serial.println("Niveau Charge de batteries lithium");

}

void loop() {
     
  //Exemple avec une tension
  int Niveau = niveauCB.getChargeLevel_18650( c );

  Serial.print("Tension : ");
  Serial.print(c, 3);
  Serial.print(" Niveau Charge pour 18650 : ");
  Serial.print(Niveau);
  Serial.println(" %");
  
  delay(100);
  c+= 0.001;
  
}
