#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "files.h"
#include "array.h"

int main(int argc, char const *argv[]) {
  FILE *fp;
  char nombre [50];
  int filas=0;
  int col=0;

  ReadCsv (nombre);
  fp = fopen (nombre,"rt");
  if (fp == NULL) {
    printf("El archivo no existe.\n");
    exit (1);
  }
  DatosCsv (fp,&filas,&col);
  fclose (fp);
  //printf("Numero de filas: %d\n",filas);
  //printf("Numero de columnas: %d\n",col);
  float datos[filas][col];
  fp = fopen (nombre,"rt");
  AlmacenarCsv (fp,filas,col,datos);
  fclose (fp);
  ImprimirArreglo (filas,col,datos);
  return 0;
}
