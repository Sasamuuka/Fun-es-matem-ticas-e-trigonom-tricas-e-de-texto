// C++ code
//
void setup() {
  Serial.begin(9600);
}

void loop() {
  // leitura do potenciometro
  int leit1 = analogRead(A0);
  int leit2 = analogRead(A0);
  int leit3 = analogRead(A0);

  // Calculo da media
  float media = (leit1 + leit2 + leit3) / 3.0;

  // Calculo da raiz
  float raiz = sqrt(media);

  // Resultados
  Serial.print("Media: ");
  Serial.println(round(media));  

  Serial.print("Raiz quadrada da media: ");
  Serial.println(ceil(raiz));    

  Serial.println("-------------------------");
  delay(2000);
}