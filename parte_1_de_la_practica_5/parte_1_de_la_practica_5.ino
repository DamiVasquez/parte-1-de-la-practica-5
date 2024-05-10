//Primera parte de la practica numero cinco
/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Relevadores y visualizadores
   Dev: Damasco Oxcal Vasquez
   Fecha: 10 de mayo
*/

float kilogramo = 10;
float libra = 2.20462;
float j;
float k;
float amperio = 8;
float microamperio = 1000000;
int a=4;
int b=5;
int c=6;
int d=7;
int tiempo=1000;
void setup(){
  for(int x=4; x<=7; x++){
    pinMode(x, OUTPUT);
  }
  Serial.begin(9600);
  
  j = (kilogramo,libra);
  Serial.print(kilogramo);
  Serial.print(" KILOGRAMOS SON ");
  j = kilogramo*libra;
  Serial.print(j);
  Serial.println(" LIBRAS.");
  Serial.println("-------------------------------------------");
   
  k = (amperio,microamperio);
  Serial.print(amperio);
  Serial.print("  AMPERIOS SON  ");
  k = amperio*microamperio;
  Serial.print(k);
  Serial.println(" MICROAMPERIOS.  ");
  Serial.println("-------------------------------------------");
}

void loop(){  
  digitalWrite(a, HIGH);//1
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  delay(tiempo);
  digitalWrite(a, HIGH);//3
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  delay(tiempo);
  digitalWrite(a, HIGH);//5
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  delay(tiempo);
  digitalWrite(a, HIGH);//7
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  delay(tiempo);
  digitalWrite(a, HIGH);//9
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  delay(tiempo);  
}
