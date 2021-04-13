#include "modelo.h"

int ReadCsv (char *nombre){
    printf("Ingresa el nombre del archivo csv: ");
    scanf("%s",nombre);
    return 0;
}

int DatosCsv (FILE *fp, int *filas, int *col){
  char cadena [255];
  int i=0;  //Contador, avanza la cadena carcater por carcater
  //Obtener columnas y recorrer línea por línea
  while (fgets (cadena,255,fp) != NULL) {
    if (*filas == 0) {
      while (cadena [i] != '\n') {
        if (cadena [i] == ',') {   //Si caracter=',' existe una columna
          (*col) = (*col) + 1;
        }
        i++;  //Avanza al siguiente caracter
      }
      (*col) = (*col) + 1;   //Agrega una columna
    }
    (*filas) = (*filas) + 1;   //Agrega una fila
  }
  return 0;
}

int AlmacenarCsv (FILE *fp, int filas, int col, float datos[filas][col]){
  char cadena [255];
  char *n;   //Guarda el dato obtenido del strtok
  int f=0,c=0;
  float num=0;

  while (fgets (cadena,255,fp) != NULL) {
    //Es el primer dato, inicio de conversión a "float"
    n = strtok (cadena,",");

    //Validar que los datos leídos sean números
    while (n != NULL) {
      for (size_t k = 0; k < strlen(n); k++) {
        if (n[k] < '.' && n[k] >= ' ' || n[k] > '.' && n[k] < '0'|| n[k] > '9') {
          printf("Formato no admitido.\n");
          exit (0);
        }
      }

      //Conversión a float
      num=strtof(n,NULL);
      datos [f][c] = num;
      n=strtok (NULL,",");
      c++;
    }
    c=0;
    f++;
  }
  return 0;
}
