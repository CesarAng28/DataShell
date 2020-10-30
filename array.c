#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int ImprimirArreglo (int filas, int col, float datos[filas][col]){
  printf("Los datos del areglo son: \n");
  for (int i = 0; i < filas; i++) {
    printf("|");
    for (int j = 0; j < col; j++) {
      printf("%f\t|\t",datos[i][j]);
    }
    printf("\n");
  }
  return 0;
}
