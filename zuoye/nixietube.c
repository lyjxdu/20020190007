// C++ code
//

int i,tickg,ticks,b,c;

void onTimer()
{
  tickg++;
  if(tickg>9)
  {
    tickg=0;
    ticks++;
    if(ticks>9)
  	{
  	  ticks=0;
 	 }
  }
  digitalWrite(5, (ticks&0x1));
  digitalWrite(6, ((ticks>>1)&0x1));
  digitalWrite(7, ((ticks>>2)&0x1));
  digitalWrite(8, ((ticks>>3)&0x1));
  digitalWrite(9, tickg&0x1);
  digitalWrite(10, (tickg&0x2)>>1);
  digitalWrite(11, (tickg&0x4)>>2);
  digitalWrite(12, (tickg&0x8)>>3);  
  c=0;
  for(i=0;i<100;i++)//一秒内检测100次按键
  {
    if(c!=1)
    {
      c=check_button();
    }
  	delay(10);
  }
}

void setup()
{
  pinMode(1,INPUT);
  for(i=5;i<13;i++)
  {
  	pinMode(i, OUTPUT);
  }
  tickg=-1;
  Serial.begin(9600); //初始化串口
}

void loop()
{
  onTimer();
}

int check_button() //检测按键是否按下
{
  b=digitalRead(1);
  if(b==0)
  {
    ticks=0;
    tickg=-1;
    return 1;
  }
  else
    return 0;
}
