// Mendefinisikan pin untuk sensor dan LED
const int pinLDR = A0;   // LDR terhubung ke pin Analog 0
const int pinLED = 13;   // LED terhubung ke pin Digital 13

// Menentukan batas nilai (threshold) untuk kondisi "Gelap"
// Nilai analog berkisar dari 0 - 1023. Anda bisa menyesuaikan angka 400 ini.
const int batasGelap = 100; 

void setup() {
  // Inisialisasi pin LED sebagai output
  pinMode(pinLED, OUTPUT);
  
  // Inisialisasi Serial Monitor untuk mengecek nilai cahaya (opsional)
  Serial.begin(9600);
}

void loop() {
  // Membaca intensitas cahaya dari sensor LDR
  int nilaiCahaya = analogRead(pinLDR);
  
  // Menampilkan nilai di Serial Monitor (Tools > Serial Monitor)
  Serial.print("Nilai Sensor: ");
  Serial.println(nilaiCahaya);
  
  // Logika: Jika gelap maka LED nyala, jika terang maka LED mati
  if (nilaiCahaya > batasGelap) {
    // Kondisi Gelap (nilai di bawah threshold)
    digitalWrite(pinLED, HIGH); // LED Menyala
  } else {
    // Kondisi Terang (nilai di atas threshold)
    digitalWrite(pinLED, LOW);  // LED Mati
  }
  
  // Memberikan jeda waktu baca selama 100 milidetik
  delay(100);
}
