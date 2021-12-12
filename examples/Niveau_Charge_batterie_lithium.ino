/******************************************
 * 
 * Exemple niveau de Charge Batterie lithium
 * 
 ******************************************/

#include "Rico2060_ChargeLevel_18650"

// Niveau charge batterie
Rico2060_ChargeLevel_18650 niveauCB = Rico2060_ChargeLevel_18650();

void setup() {

  Serial.begin(115200);
  Serial.println("Niveau Charge de batteries lithium");

  //Exemple avec une tension
  int Niveau = niveauCB( 3.67 );

  Serial.print("Niveau Charge : ");
  Serial.print(Niveau);
  Serial.println(" %");

}

void loop() {

  delay(1000);

}
