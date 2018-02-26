/******************************************************************************                                                                                          
si la temperatura (valor que ponemos en la variable tempAgua)
supera los 100ºC, que muestre en la pantalla (monitor serie) 
"Agua supera los 100C, esta hirviendo!"
*******************************************************************************/

int tempAigua = 10;

//********** Setup ************************************************************
void setup() // se ejecuta una vez
{
  Serial.begin(9600);//Activa el puerto serie y fija la velocidad en 9600 bps
  
  if (tempAigua > 100){
    Serial.print("Agua supera los 100C, esta hirviendo!");} 
}


void loop() // hace que el programa se ejecute cíclicamente
{
}



