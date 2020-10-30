#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int ReadCsv (char *nombre){
    printf("Ingresa el nombre del archivo csv: \n");
    scanf("%s",nombre);
    return 0;
}

int DatosCsv (FILE *fp, int *filas, int *col){
  //La linea del archivo
  char cadena [255];
  //Es el contador que avanza la cadena carcater por carcater
  int i=0;
  //Obtener linea por linea
  while (fgets (cadena,255,fp) != NULL) {
    //Imprimir la linea
    //printf("%s\n",cadena);
    //Esto solo checa la primera linea para sacar las columnas
    if (*filas == 0) {
      //Recorrer la linea
      while (cadena [i] != '\n') {
        //Si encuentra una ',' significa que hay una columna
        if (cadena [i] == ',') {
          (*col) = (*col) + 1;
        }
        //Avanza al siguiente caracter
        i++;
      }
      //Agrega una columna mas
      (*col) = (*col) + 1;
    }
    //Agrega una fila mas
    (*filas) = (*filas) + 1;
  }
  return 0;
}

int AlmacenarCsv (FILE *fp, int filas, int col, float datos[filas][col]){
  //Guarda la linea completa del archivo
  char cadena [255];
  //Guarda el dato que sacamos del strtok
  char *n;
  int f=0,c=0;
  //Numero float
  float num=0;
  while (fgets (cadena,255,fp) != NULL) {
    //Imprime la cadena
    //printf("%s\n",cadena);
    //Es el primer dato, HAY QUE CONVERTIRLO A FLOAT
    n = strtok (cadena,",");
    //Mientras no llegue al final de la cadena
    while (n != NULL) {
      //Checamos que sean numeros
      for (size_t k = 0; k < strlen(n); k++) {
        if (n[k] < '.' && n[k] >= ' ' || n[k] > '.' && n[k] < '0'|| n[k] > '9') {
          printf("Formato no admitido.\n");
          exit (0);
        }
      }
      //Convertimos a float
      num=strtof(n,NULL);
      //Imprimes el valor que tomo el strtok
      //printf("Num strtok: %f\n",num);
      //Guardas el float que ya tienes en el arreglo
      datos [f][c] = num;
      //printf("Num arreglo: %f\n",datos[f][c]);
      //Vuelves a leer otro string
      n=strtok (NULL,",");
      c++;
    }
    c=0;
    f++;
  }
  return 0;
}
