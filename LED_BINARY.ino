void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a,b;
  Serial.print("Enter the number");
  a=Serial.parseInt();
  b=9;
  while(a!=0)
  {
    digitalWrite(b,a%2);
    Serial.println(a%2);
    a=a/2;
    b=b++;
  }
  delay(200);
}
