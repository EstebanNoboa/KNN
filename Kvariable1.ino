/*
   PROGRAMA K1
*/


#include "datos_entrenamiento.h" //en doble comilla estan almacenadas en una carpeta local
#include "datos_test.h"
int col = 0;
int fila = 0;
int filaprueba=0;
int repetido=0;
int repetir[30][1];
float distancia1;
float distancia2;
float distancia3;
float distanciav;
float distanciamenor = 1000;
float distanciamenor1 = 1000;
int k=9;

void setup() {
  Serial.begin(9600);
}

void loop() {

  //primero();
  //segundo();
  class5();
}

void primero() {
  for (int fila = 0 ; fila < 50; fila++) { //contador filas (for lento)
    for (int col = 0 ; col < 5; col++) { //contador columnas (for rapido)
      Serial.print(matriz [fila][col]); //imprime dato matriz
      Serial.print(" , "); //separador dato
      delay(25);
    }
    col = 0; //reinicio de colmunas
    Serial.println(" ");
  } //carac en blanco y avance de lines
}


void segundo() {
  for (; fila < 50; fila++) { //contador filas (for lento)
    distancia1 = sqrt(pow((matriz[fila][0] - prueba[1][0]), 2) +
                      pow((matriz[fila][1] - prueba[1][1]), 2) +
                      pow((matriz[fila][2] - prueba[1][2]), 2) +
                      pow((matriz[fila][3] - prueba[1][3]), 2));
    Serial.println(distancia1);
    distancia2 = sqrt(pow((matriz[fila + 1][0] - prueba[1][0]), 2) +
                      pow((matriz[fila + 1][1] - prueba[1][1]), 2) +
                      pow((matriz[fila + 1][2] - prueba[1][2]), 2) +
                      pow((matriz[fila + 1][3] - prueba[1][3]), 2));
    Serial.println(distancia2);
    distancia3 = sqrt(pow((matriz[fila + 2][0] - prueba[1][0]), 2) +
                      pow((matriz[fila + 2][1] - prueba[1][1]), 2) +
                      pow((matriz[fila + 2][2] - prueba[1][2]), 2) +
                      pow((matriz[fila + 2][3] - prueba[1][3]), 2));
    Serial.println(distancia3);

    //pow es valor y exponente, el sprt es para raiz cuadrada
    if (distancia1 < distancia2 && distancia2 < distancia3 && distancia1 < distancia3)
    {
      Serial.println("**********************************");
       Serial.println("LA FLOR ES LA NUMERO: ");
      Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
        delay(1000);
    }
    if (distancia2 < distancia1 && distancia2 < distancia3 && distancia3 < distancia1)
    {
      Serial.println("**********************************");
       Serial.println("LA FLOR ES LA NUMERO: ");
      Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
        delay(1000);
    }
    if (distancia2 < distancia1 && distancia3 < distancia2 && distancia3 < distancia1)
    {
      Serial.println("**********************************");
       Serial.println("LA FLOR ES LA NUMERO: ");
      Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
    }
    if (distancia2 < distancia1 && distancia2 < distancia3 && distancia1 < distancia3)
    {
      Serial.println("**********************************");
       Serial.println("LA FLOR ES LA NUMERO: ");
      Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
        delay(1000);
    }
    if (distancia3 < distancia2 && distancia3 < distancia1 && distancia1 < distancia2)
    {
      Serial.println("**********************************");
      Serial.println("LA FLOR ES LA NUMERO: ");
      Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
        delay(1000);
    }
    if (distancia1 < distancia2 && distancia3 < distancia2 && distancia1 < distancia3)
    {
      Serial.println("**********************************");
       Serial.println("LA FLOR ES LA NUMERO: ");
      Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
        delay(1000);
    }
  }
}

void class5(){
  for (; fila < 120; fila++) { //contador filas (for lento)
    for(; filaprueba<k;filaprueba++){
    distanciav = sqrt(pow((matriz[fila][0] - prueba[filaprueba][0]), 2) +
                      pow((matriz[fila][1] - prueba[filaprueba][1]), 2) +
                      pow((matriz[fila][2] - prueba[filaprueba][2]), 2) +
                      pow((matriz[fila][3] - prueba[filaprueba][3]), 2));
    Serial.println("MENOR DISTANCIA DE CADA VECINO: ");
     Serial.println(distanciav);
      Serial.print("DE ACUERDO A ESTE VECINO LA FLOR ES: ");
       Serial.println(matriz[fila][4]);
       Serial.println("**********************************");
       delay(500);
     for(int i=0;i<matriz[fila][4];i++){
      for(int j=0;j<matriz[fila][4];j++){
      if(matriz[i][4]==matriz[j][4]){
        repetido = repetido;
        }}
        int repetir=matriz[fila][4];
        Serial.println("**********************************");
      Serial.println("MAS REPETIDO, por tanto la flor pertenece a: ");
      Serial.println(repetir);
        delay(1000);
     }
    }
    }
  }


/*if (distancia2 < distanciamenor1 )
  {
  distanciamenor1 = distancia2;

  Serial.println("**********************************");
  Serial.println(matriz[fila][4]);
  }

     if (matriz[fila][4] < distanciav) {
      Serial.println("**********************************");
       Serial.println("LA FLOR ES LA NUMERO: ");
       Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
        delay(1000);*/




