    
// C++ code
//
int i;
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  for(i=0;i<14;i++)
  {
    digitalWrite(i, HIGH);
    delay(200); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    delay(200);// for 1000 millisecond(s)
  }
}
