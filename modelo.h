#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* inicio estructura array_h */
#ifndef array_h
#define array_h

#ifdef array_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

EXTERN int ReadCsv (char *nombre);
EXTERN int DatosCsv (FILE *fp, int *filas, int *col);
EXTERN int AlmacenarCsv (FILE *fp, int filas, int col, float datos [filas][col]);
EXTERN int ImprimirArreglo (int filas, int col,float datos [filas][col]);
EXTERN int ImprimirEstado (int filas, int col);

#undef array_IMPORT
#undef EXTERN

#endif /* fin files_h */
