/*******************************************************************************    
          La eficiencia energética de los electrodomésticos:                
                   Los más eficientes: A+++_ A++_ A+                            
                      Consumo moderado: A_ B                                  
                        Alto consumo: C_ D                                  
*******************************************************************************/
 
int QualificacioEnergetica = 44; /*según que valor ponemos nos aparecerá una 
                                  letra (A-F) en la pantalla (monitor serie)*/

void setup()          // se ejecuta una vez
{
  Serial.begin(9600); // activa el puerto serie y fija la velocidad en 9600 bps 

  if (QualificacioEnergetica < 3.5){        //si es menos de 3.5 aparecerá una A    
  Serial.print("A");}
   
  else if (QualificacioEnergetica < 6.5){   //si es menos de 6.5 aparecerá una B
  Serial.print(" B ");}
  
  else if (QualificacioEnergetica < 11.1){ //si es menos de 11.1 aparecerá una C
  Serial.print(" C ");}
  
  else if (QualificacioEnergetica < 17.7){ //si es menos de 17.7 aparecerá una D
  Serial.print(" D ");}
  
  else if (QualificacioEnergetica < 38.2){ //si es menos de 38.2 aparecerá una E
  Serial.print(" E ");}
  
  else if (QualificacioEnergetica < 43.2){ //si es menos de 43.2 aparecerá una F
  Serial.print(" F ");}
  
  else{                              //si es mas o igual de 43.2 aparecerá una G
  Serial.print(" G ");}
}

void loop()   // se ejecuta cíclicamente
{
}

