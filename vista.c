#include "modelo.h"

int ImprimirArreglo(int filas, int col, float datos[filas][col]){
  printf("Los datos del areglo son: \n");
  for (int i = 0; i < filas; i++) {
    printf("|");
    for (int j = 0; j < col; j++) {
      printf("%f\t|\t",*((*(datos+i))+j));
    }
    printf("\n");
  }
  return 0;
}

int ImprimirEstado(int filas, int col){
  printf("\tEstado del archivo:\n");
  printf("\tNumero de filas: %d\n",filas);
  printf("\tNumero de columnas: %d\n",col);
}
