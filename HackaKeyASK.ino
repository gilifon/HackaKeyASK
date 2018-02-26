boolean signal_open[] = {1,1,1,0,1,1,1,0,1,0,0,0,1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,0,0,0,1,1,1,0,1,0,0,0,1,0,0,0,1,1,1,0,1,0,0,0,1,0,0,0};
boolean signal_close[] = {1,1,1,0,1,1,1,0,1,0,0,0,1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,0,0,0,1,1,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,1,0,1,0,0,0};

int GND = 8;
int VCC = 9;
int DATA = 10;

int ASK_delay = 385;

void setup()
{
  pinMode(GND,OUTPUT);
  pinMode(VCC,OUTPUT);
  pinMode(DATA,OUTPUT);

  digitalWrite(GND,LOW);
  digitalWrite(VCC,HIGH);
}

void loop()
{
  for (int i = 0; i<sizeof(signal_open)-1; i++)
  {
    digitalWrite(DATA,signal_open[i]);
    delayMicroseconds(ASK_delay);
  }
  delayMicroseconds(9000);  
}
