const int in1 = 17;
const int in2 = 18;
const int pwmPin = 16;
const int stby = 19;
const int potPin = 15;

void setup() {
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(stby, OUTPUT);
digitalWrite(stby, HIGH); // Aktifkan driver
digitalWrite(in1, HIGH); // Atur arah putaran maju
digitalWrite(in2, LOW);
ledcSetup(0, 5000, 8);
ledcAttachPin(pwmPin, 0);

}

void loop() {
ledcWrite(0, 200); // Set kecepatan motor (0-255)
int potValue = analogRead(potPin); // Hasil: 0 - 4095
int pwmValue = map(potValue, 0, 4095, 0, 255); // Konversi ke 0 - 255
delay(15);
}
