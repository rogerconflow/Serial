int tempAigua = 20;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua >= 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  }
 else
{
 Serial.print("aigua encara no vull");
} 
}

void loop()   // we need this to be here even though its empty
{
}


