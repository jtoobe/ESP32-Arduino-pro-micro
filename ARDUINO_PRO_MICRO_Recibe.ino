
// Pro Micro - Recibir mensajes y mostrarlos en su Monitor Serie

String input = "";

void setup() {
  Serial1.begin(9600);  // Comunicación con ESP32
  Serial.begin(9600);
  Serial.print("Seriales inicializados");
}

void loop() {
  if (Serial1.available() > 0) {
    char c = Serial1.read();

    if (c == '\n') {
      // Cuando llega fin de línea, mostramos el mensaje
      Serial.print("Recibido: ");
      Serial.println(input);
      input = "";  // Limpia el buffer
    } else {
      input += c;  // Acumula caracteres
    }
  }
}
