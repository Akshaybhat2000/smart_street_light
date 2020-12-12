const int ledPin=2;
const int ldrPin=A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(ldrPin,INPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
   int ldrStatus=analogRead(ldrPin);
   Serial.println(ldrStatus);

   if (ldrStatus <=300){
    digitalWrite(ledPin,HIGH);
   }
   else{
    digitalWrite(ledPin,LOW);
   }
}
