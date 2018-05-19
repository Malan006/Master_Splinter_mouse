
//dratft of IR sensor code

//functions for ir 
//int getIR(recP)
/*{
  int return = analogRead(recPin);
  digitalWrite(ledP,LOW);
  return return;
}*/

//void PrintIR()
//onIR()
//offIR()
//setIR()

class IR
{
  public:
    IR(int ir_Lside_out, int ir_Rside_out, int ir_front_out, int front_in, int Rside_in, int Lside_in);
    int readSensor(int recPin);
    void powerUp(int ledPin);
    void powerdown(int ledPin);
    int irArray[3][3];
};

//---------------------------------------------------------------------


IR::IR(int ir_Lside_out, int ir_Rside_out, int ir_front_out, int front_in, int Rside_in, int Lside_in)
{

  pinMode( ir_Lside_out, OUTPUT );
    pinMode( ir_Rside_out, OUTPUT );
    pinMode( ir_front_out, OUTPUT );
    
    pinMode( front_in, INPUT );
    pinMode( Lside_in, INPUT );
    pinMode( Rside_in, INPUT );

    int irArray[3][2]={
    {ir_front_out, front_in},
    {ir_Lside_out,Lside_in},
    {ir_Lside_out, Lside_in }
  };
}

int IR::readSensor(int recPin)
{
  int SensorReading = analogRead(recPin);
  int Mapped=map(sensorReading, 72, 431, 0, 255);
  analogWrite(ledPin, Mapped);
  delay(100)
  return returnVal;
}

void IR::powerUp(int ledPin){
    digitalWrite(ledPin, HIGH);
}

void IR::powerDown(int LedPin){
  digitalWrite(ledPin,LOW);
}
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
