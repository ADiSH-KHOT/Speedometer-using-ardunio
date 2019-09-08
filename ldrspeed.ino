
// These constants won't change. They're used to give names to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED is attached to

int sensorValue = 0;  
//int outputValue = 0; 
int b;// value output to the PWM (analog out)
unsigned long time7;
unsigned long time2;
float time3;
float sped = 0;

float object_length = 3.5; //object length in cm

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
 //Serial.println(sensorValue);


if( sensorValue<60)
{
//  Serial.println("0");
 
time7 = millis();
}
else
{
   time2 = millis();
           time3 = (time2 - time7);
           sped = (object_length / time3)*2500;
             Serial.println(sped);
}


delay(250);
}
