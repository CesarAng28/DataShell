#ifndef files_h
#define files_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#ifdef files_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

EXTERN int ReadCsv (char *nombre);

EXTERN int DatosCsv (FILE *fp, int *filas, int *col);

EXTERN int AlmacenarCsv (FILE *fp, int filas, int col, float datos [filas][col]);

#undef files_IMPORT
#undef EXTERN



#endif /* files_h */
