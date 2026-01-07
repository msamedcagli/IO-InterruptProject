// --- PIN TANIMLAMALARI ---
const int trigPin = 7;      
const int echoPin = 2;      // KESME PİNİ
const int ledPin = 11;      // Buzzer yerine artık LED var

// --- KESME DEĞİŞKENLERİ ---
volatile long baslangicZamani = 0;
volatile long bitisZamani = 0;
volatile bool olcumHazir = false; 

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT); // LED pini çıkış olarak ayarlandı
  
  Serial.begin(9600);

  // KESME AYARI:
  attachInterrupt(digitalPinToInterrupt(echoPin), echoKesmesi, CHANGE);
}

void loop() {
  // 1. ADIM: Sensörü Tetikle
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // 2. ADIM: Ölçüm Sonucunu Kontrol Et
  if (olcumHazir == true) {
    long sure = bitisZamani - baslangicZamani;
    int mesafe = sure * 0.034 / 2;
    
    Serial.print("Mesafe: ");
    Serial.print(mesafe);
    Serial.println(" cm");

    // --- DEĞİŞEN KISIM BURASI ---
    // 50 cm altındaysa LED'i YAK, değilse SÖNDÜR
    if (mesafe > 0 && mesafe < 50) {
      digitalWrite(ledPin, HIGH); // LED YANAR (Alarm)
    } else {
      digitalWrite(ledPin, LOW);  // LED SÖNER (Güvenli)
    }
    
    olcumHazir = false;
  }
  
  delay(100); 
}

// --- INTERRUPT SERVICE ROUTINE (ISR) ---
void echoKesmesi() {
  if (digitalRead(echoPin) == HIGH) {
    baslangicZamani = micros();
  } 
  else {
    bitisZamani = micros();
    olcumHazir = true;
  }
}
