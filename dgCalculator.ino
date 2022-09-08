int outputVolt = 6;
  int inputVolt1I = 2 ;
  int inputVolt2NI = 3;
  int outputVolt2 = 9;
  int val;

void setup() {
  // put your setup code here, to urun once:
  

  pinMode(inputVolt1I , OUTPUT);
  pinMode(inputVolt2NI , OUTPUT);
  pinMode(outputVolt, INPUT);
  Serial.begin(9600);

}

void loop() {
  
  digitalWrite(inputVolt1I ,LOW);

  digitalWrite(inputVolt2NI ,LOW);

  val = digitalRead(outputVolt);
  Serial.println(val);
  delay (1000);
}