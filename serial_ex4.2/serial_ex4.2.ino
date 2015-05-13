int tempAigua = 120;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  }
 else if (tempAigua >=90 && tempAigua <100)
{
 Serial.print("apunt de bullir");
} 
else
{
  Serial.print( "encara no esta bullint");
  }
}

void loop()   // we need this to be here even though its empty
{
}


