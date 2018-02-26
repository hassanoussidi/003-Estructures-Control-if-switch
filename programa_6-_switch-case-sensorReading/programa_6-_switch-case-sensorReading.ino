/******************************************************************************
Dependiendo que número (del 0 al 3) ponemos en la variable 
(sensorReading) nos aparecerá en el "monitor serie" un color u otro 
y si ponemos otro  número, nos pondrá (I don't know)                                                                                                                                                                                                                                                                            
*******************************************************************************/

int sensorReading = 3; 

void setup() // se ejecuta una vez
{
  Serial.begin(9600); // activa el puerto serie y fija la velocidad en 9600 bps 

  Serial.print("The day is "); //muestra lo que hay entre () en la pantalla 
   
  switch (sensorReading)
  {
  case 0:    
    Serial.println("dark");
    break;
  case 1:    
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  default:
    Serial.println("... I don't know!!!");
  } 
}

void loop() {} // se ejecuta cíclicamente



