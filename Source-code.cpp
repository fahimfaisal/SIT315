// C++ code
//


int temp =0;
int threshold = 40;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(5,HIGH);
 
}

void loop()
{
  temp = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  
  if(temp>threshold)
  {
  	digitalWrite(6,HIGH);
    	digitalWrite(5,LOW);
    
   
    Serial.print("Temperature is ");
    Serial.print(temp);
    Serial.print(" degree Celcius, ABOVE LIMIT!!!");
    Serial.println("");
    
      
  }
  else
  {
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    
    Serial.print("Temperature is ");
    Serial.print(temp);
    Serial.print(" degree Celcius, WITHIN LIMIT ");
    Serial.println("");
  }
  delay(1000);
}