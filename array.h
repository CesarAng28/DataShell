#ifndef array_h
#define array_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#ifdef array_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

EXTERN int ImprimirArreglo (int filas, int col,float datos [filas][col]);


#undef array_IMPORT
#undef EXTERN



#endif /* array_h */
