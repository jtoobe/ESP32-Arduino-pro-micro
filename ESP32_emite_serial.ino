// codigo para el esp32 (emisor)
#include <HardwareSerial.h>

HardwareSerial MySerial(1); // definir un Serial para UART1
const int MySerialRX = 32;
const int MySerialTX = 33;

void setup() 
{
      // inicializar el Serial a los pines
    MySerial.begin(9600, SERIAL_8N1, MySerialRX, MySerialTX);
}

void loop() 
{
      // aqui podríamos usar nuestro MySerial con normalidad
    while (MySerial.available() > 0) {
        uint8_t byteFromSerial = MySerial.read();
        //y lo que sea
    }
   
  MySerial.println("holaa");  // ← usa println
  delay(1000);
}
