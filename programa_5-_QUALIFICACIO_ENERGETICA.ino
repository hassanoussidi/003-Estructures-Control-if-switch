/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int QualificacioEnergetica = 43.3;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

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
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************

