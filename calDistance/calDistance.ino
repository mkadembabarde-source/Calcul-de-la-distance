long duration;
long distance;

int TRIG_PIN = 9;
int ECHO_PIN =10;


void setup() {
  // put your setup code here, to run once:
  
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
  Serial.println("le systeme est....");

}

void loop() {
  // put your main code here, to run repeatedly:


  digitalWrite(TRIG_PIN,LOW);
  delay(100);

  digitalWrite(TRIG_PIN,HIGH);
  delay(10);
  digitalWrite(TRIG_PIN,LOW);

  duration=pulseIn(ECHO_PIN,HIGH);

  distance = duration*0.034*0.5;


  Serial.println("la distance est....");
   delay(1000);
   Serial.println("");


  Serial.print(distance);
   delay(1000);


}
