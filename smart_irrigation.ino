int moisture_level;
void setup() {
  pinMode(A0,INPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int moisture_level = analogRead(A0);
   Serial.println(G);
   delay(100);
  if (moisture_level >=660){
    digitalWrite(8, LOW);
    delay(100);
    }

  else{
    digitalWrite(8, HIGH);
    delay(100);
    }
 }
