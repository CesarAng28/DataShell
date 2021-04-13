/*
 * Práctica 2: DataShell
 * @copyright TDA 2021
 * @license as you wish
 * @author Team D
  *@Oliva Lopéz Yesenia Guadalupe, Vergara Mendoza Monica Ivette
 * @version 01/03/2021
*/

#include "modelo.h"

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

  float datos[filas][col];
  fp = fopen (nombre,"rt");
  AlmacenarCsv (fp,filas,col,datos);
  fclose (fp);
  ImprimirArreglo (filas,col,datos);
  ImprimirEstado(filas,col);
  return 0;
}
