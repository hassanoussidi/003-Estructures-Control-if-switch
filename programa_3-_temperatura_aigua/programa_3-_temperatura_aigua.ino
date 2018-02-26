/*******************************************************************************
temperaturas inferiores a 100ºC muestra por pantalla "Agua aún no hierve"
iguales o superiores a 100ºC muestra por pantalla "Agua hirviendo" 
*******************************************************************************/

int tempAigua = 10;

void setup()           //  se ejecuta una vez
{
  Serial.begin(9600); //activa el puerto serie y fija la velocidad en 9600 bps

  if (tempAigua < 100){
    Serial.print("Aigua encara no bull");}
     
   else{
    Serial.print("Aigua bullint");}
}

void loop(){   // se ejecuta cíclicamente
}
