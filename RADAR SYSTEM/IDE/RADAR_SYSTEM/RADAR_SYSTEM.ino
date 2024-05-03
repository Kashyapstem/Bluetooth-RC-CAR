char S = 0;
char x = 0;
char F = 0;
char B = 0;
char L = 0;
char R = 0;
#define in1 11
#define in2 10
#define in3 9
#define in4 8
void setup()
{
 Serial.begin(9600);
 pinMode(11, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(8, OUTPUT);
}
void loop()
{
 while (Serial.available () > 0)
 {
 x = Serial.read();
 Serial.println(x);
 if (x == 'F')
 {
 digitalWrite(11, HIGH);
 digitalWrite(10, LOW);
 digitalWrite(9, HIGH);
 digitalWrite(8, LOW);
 //delay(100);
 }
 else if (x == 'B')
 {
 digitalWrite(11, LOW);
 digitalWrite(10, HIGH);
 digitalWrite(9, LOW);
 digitalWrite(8, HIGH);
 //delay(100);
 }
 else if (x == 'L')
 {
 digitalWrite(11, HIGH);
 digitalWrite(10, LOW);
 digitalWrite(9, LOW);
 digitalWrite(8, HIGH);
 //delay(100);
 }
 else if (x == 'R')
 {
 digitalWrite(11, LOW);
 digitalWrite(10, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(8, LOW);
 //delay(100);
 }
 else if (x == 'S')
 {
 digitalWrite(11, LOW);
 digitalWrite(10, LOW);
 digitalWrite(9, LOW);
 digitalWrite(8, LOW);
 //delay(100);
 }
 }
}
