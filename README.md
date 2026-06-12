# Arduino-dengan-Sensor-LDR
LDR (*Light Dependent Resistor*) adalah komponen yang nilai hambatannya (resistansi) akan menurun saat terkena cahaya terang, dan meningkat saat berada di tempat gelap.

# Komponen yang Dibutuhkan
- Arduino UNO
- Sensor LDR
- 1x Resistor 10k Ohm (sebagai voltage divider)
- 1x Resistor 220 Ohm (untuk LED)
- LED (sebagai indikator output)
- Kabel Jumper
- Breadboard

# Rangkaian
<img width="1272" height="457" alt="Copy of Arduino LDR (1)" src="https://github.com/user-attachments/assets/dab28430-f968-400b-9c4d-4bdbc3ede078" />
➡️ Untuk memfungsikan sensor LDR, kita membutuhkan resistor tambahan (biasanya 10k Ohm) agar berfungsi sebagai pembagi tegangan (voltage divider).

### ▶️Koneksi Sensor LDR
- **Kaki 1 LDR**: Sambungkan ke pin 5V di Arduino
- **Kaki 2 LDR**: Sambungkan ke pin A0 (Analog 0) di Arduino
- **Resistor 10k Ohm**: Sambungkan salah satu ujungnya ke kaki 2 LDR (sejajar dengan kabel ke A0), dan ujung lainnya ke pin GND di Arduino

### ▶️Koneksi LED
- Kaki Panjang (+) / Anoda: Sambungkan ke pin 13 di Arduino
- Kaki Pendek (-) / Katoda: Sambungkan ke Resistor 220 Ohm, lalu ujung resistor lainnya ke pin GND di Arduino

|  LCD 16x2 I2C | Arduino UNO |
| --- | --- |
| GND | GND |
| VCC | 5V |
| SDA | Pin Analog 4 (A4) |
| SCL | Pin Analog 5 (A5) |
