# define ultraEcho 4
# define ultraTrig 7

double microsecondsToCentimeters(double duration);
long readUltra ();

/*
Função de conversão de microsegundos para centímetros
*/
double microsecondsToCentimeters(double duration) {
  return (duration / 2) / 29.1;
}

/*
Função que retorna a distância, em centimetros, do sensor ultrasonico
até o objeto mais perto do sensor.
*/
long lerUltra() {
  digitalWrite(ultraTrig, LOW);
  delayMicroseconds(5);
  digitalWrite(ultraTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(ultraTrig, LOW);

  long duration = pulseIn(ultraEcho, HIGH);
  long cm = microsecondsToCentimeters(duration);

  return cm;
} 