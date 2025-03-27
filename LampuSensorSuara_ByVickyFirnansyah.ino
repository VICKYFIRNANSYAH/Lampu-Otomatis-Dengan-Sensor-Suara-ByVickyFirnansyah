//LAMPU OTOMATIS MENGGUNAKAN SENSOR SUARA
//BY MUHAMMAD VICKY FIRNANSYAH 
//https://github.com/VICKYFIRNANSYAH

int pinSensor = A0;
const int Relay = 2;
int nilaiSensor = 0;
 
void setup(){
Serial.begin (9600);
pinMode (Relay, OUTPUT);
digitalWrite(Relay,HIGH);
}
//https://github.com/VICKYFIRNANSYAH

void loop() {
nilaiSensor = analogRead(pinSensor);
Serial.print ("Sensor = "); 
Serial.println(nilaiSensor);

if (nilaiSensor > 522){
 delay(150);
 while(true){
  digitalWrite(Relay, LOW);
  nilaiSensor = analogRead(pinSensor);
 if(nilaiSensor > 522){break;}
 }
 delay(150); 
}

else{
 digitalWrite(Relay, HIGH);
 }
}
