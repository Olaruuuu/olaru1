String inputString = "";
boolean stringComplete = false;
String commandString = "";

int led1 = 19;
int led2 = 20;
int led3 = 21;

boolean isConnected = false;

void setup() {  
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop() {
  if(stringComplete)
  {
    stringComplete = false;
    getCommand();
    if(commandString.equals("STAR"))
    {
      
    }
    if(commandString.equals("STOP"))
    {
      turnLedOff(led1);
      turnLedOff(led2);
      turnLedOff(led3);
    }
     else if(commandString.equals("LED1"))
  {
    boolean LedState = getLedState();
    if(LedState == true)
    {
      turnLedOn(led1);
    }else
    {
      turnLedOff(led1);
    }   
  }
    else if(commandString.equals("LED2"))
  {
    boolean LedState = getLedState();
    if(LedState == true)
    {
      turnLedOn(led2);
    }else
    {
      turnLedOff(led2);
    }   
  }
    else if(commandString.equals("LED3"))
  {
    boolean LedState = getLedState();
    if(LedState == true)
    {
      turnLedOn(led3);
    }else
    {
      turnLedOff(led3);
    }   
  }
  
  inputString = "";
   }

}

void getCommand()
{
  if(inputString.length()>0)
  {
    commandString = inputString.substring(1,5);
  }
}

boolean getLedState()
{
  boolean state = false;
  if(inputString.substring(5,7).equals("ON"))
  {
    state = true;
  }else
  {
    state = false;
  }

  return state;
}

void turnLedOn(int pin)
{
  digitalWrite(pin,HIGH);
}

void turnLedOff(int pin)
{
  digitalWrite(pin,LOW);
}
void serialEvent()
{
  while (Serial.available())
  {
    char inChar = (char)Serial.read();
    inputString += inChar;

    if(inChar == '\n')
    {
      stringComplete = true;
      }
    }
}
