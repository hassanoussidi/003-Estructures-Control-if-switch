/*******************************************************************************
temperaturas inferior a 90ºC muestra por pantalla "Agua aún no hierve"
iguales o superiores a 90ºC e inferiores a 100ºC  "Agua apunte de hervir"
igual a 100ºC  "Agua a 100ºC"
superiores a 100ºC  "Agua hirviendo"
*******************************************************************************/

int tempAigua = 100;  /*según que valor ponemos nos aparecerá una 
                       frase u otra en la pantalla (monitor serie)*/

void setup()          // se ejecuta una vez
{
  Serial.begin(9600); //Activa el puerto serie y fija la velocidad en 9600 bps

  if (tempAigua < 90){     
  Serial.print("Agua aún no hierve");}  
   
  else if (tempAigua >=90&&tempAigua<100){ 
  Serial.print("Agua apunte de hervir");}   
   
  else if (tempAigua ==100){             
  Serial.print("Agua a 100ºC");}          
  
  else{
  Serial.print("Agua hirviendo");}
}

void loop(){   // se ejecuta cíclicamente
}



