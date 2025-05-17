int ir1 = 9,ir2 = 10;
unsigned long time1,time2;
float distance = 0.42,speed,Tt;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("\nSpeed Detecting...");
  while(digitalRead(ir1) == 1)
  {

  }
  if(digitalRead(ir1) == 0){
    time1 = millis();
    while(digitalRead(ir2) == 1)
    {

    }
    time2 = millis();
    Tt = time2 - time1;
    Tt = Tt/1000.0;
    speed = distance/Tt;
    speed = speed*3.6;
    Serial.print("Speed: ");
    Serial.print(speed);
    Serial.println("Km/hr");
    delay(1000);
  }
}