/**********************************************************************************
**             La eficiencia energética de los electrodomésticos:                **
**                   Los más eficientes: A+++_A++_A+                             **
**                     Consumo moderado: A_ B                                    **
**                         Alto consumo: C_ D                                    **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int QualificacioEnergetica = 44;

//********** Setup ****************************************************************
void setup()         // se ejecuta una vez
{
  Serial.begin(9600); // activa el puerto serie y fija la velocidad en 9600 bps 

  if (QualificacioEnergetica < 3.5)    
  {
  Serial.print("A");
  } 
  else if (QualificacioEnergetica < 6.5)
  {
  Serial.print(" B ");
  }
  else if (QualificacioEnergetica < 11.1)
  {
  Serial.print(" C ");
  }
  else if (QualificacioEnergetica < 17.7)
  {
  Serial.print(" D ");
  }
  else if (QualificacioEnergetica < 38.2)
  {
  Serial.print(" E ");
  }
  else if (QualificacioEnergetica < 43.2)
  {
  Serial.print(" F ");
  }
  else 
  {
  Serial.print(" G ");
  }

}

//********** Loop *****************************************************************
void loop()   // se ejecuta cíclicamente
{
}

//********** Funcions *************************************************************

