//Broches connectées 74HC595
const int DS = 8; // Données
const int ST_CP = 9; // Verrou
const int SH_CP = 10; // Horloge

byte RAZ = B00000000;
byte Donnee1 = B10000000;
byte Donnee2 = B01000000;
byte Donnee3 = B11111111;
long int Chiffre1 = 0x8000;
int impuls = 10;
int pause = 100;

 
void setup()
{
pinMode(DS, OUTPUT);
pinMode(ST_CP, OUTPUT);
pinMode(SH_CP, OUTPUT);
Serial.begin(9600);
Serial.println(Chiffre1,BIN);
Serial.println(Chiffre1);
}
void note1(int dure){
   digitalWrite(ST_CP, LOW);
  shiftOut(DS, SH_CP, LSBFIRST, B00000001);
  digitalWrite(ST_CP, HIGH);
  delay(dure);
  
}
void note2(int dure){
  digitalWrite(ST_CP, LOW);
  shiftOut(DS, SH_CP, LSBFIRST, B00000010);
  digitalWrite(ST_CP, HIGH);
  delay(dure);
}
void note3(int dure){
  digitalWrite(ST_CP, LOW);
  shiftOut(DS, SH_CP, LSBFIRST, B00000100);
  digitalWrite(ST_CP, HIGH);
  delay(dure);
}
void note4(int dure){
  digitalWrite(ST_CP, LOW);
  shiftOut(DS, SH_CP, LSBFIRST, B00001000);
  digitalWrite(ST_CP, HIGH);
  delay(dure);
}
void note5(int dure){
  digitalWrite(ST_CP, LOW);
  shiftOut(DS, SH_CP, LSBFIRST, B00010000);
  digitalWrite(ST_CP, HIGH);
  delay(dure);
}
void note6(int dure){
  digitalWrite(ST_CP, LOW);
  shiftOut(DS, SH_CP, LSBFIRST, B00100000);
  digitalWrite(ST_CP, HIGH);
  delay(dure);
}
void note7(int dure){
  digitalWrite(ST_CP, LOW);
  shiftOut(DS, SH_CP, LSBFIRST, B01000000);
  digitalWrite(ST_CP, HIGH);
  delay(dure);
}
void note8(int dure){
  digitalWrite(ST_CP, LOW);
  shiftOut(DS, SH_CP, LSBFIRST, B10000000);
  digitalWrite(ST_CP, HIGH);
  delay(dure);
}
void loop(){
  note1(1000);
  note2(1000);
  note3(1000);
  note4(1000);
  note3(1000);
  note2(1000);
  note1(1000);
  note4(1000);
  note6(1000);
  note2(1000);
  note8(1000);
  note4(1000);
  note2(1000);
  note6(1000);
  note4(1000);
  note8(1000);
}
