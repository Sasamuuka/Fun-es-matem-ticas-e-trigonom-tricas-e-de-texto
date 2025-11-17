void setup() {
  Serial.begin(9600);
  Serial.println("Digite valores de X e Y separados: ");
}

void loop() {
  // Espera do usuario
  if (Serial.available() > 0) {
    // Lê os dois
    float x = Serial.parseFloat();
    float y = Serial.parseFloat();

    // Calculo do angulo
    float anguloRad = atan2(y, x);

    // Conversao em graus
    float anguloGraus = anguloRad * 180.0 / PI;

    // Resultado
    Serial.print("Angulo calculado: ");
    Serial.print(anguloGraus);
    Serial.println(" graus");

    Serial.println("\nDigite novos: ");
  }
}
