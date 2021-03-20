//
//  Statistic.h
//
//
//  Created by Alejandro Solorzano Santos.
//

#ifndef Statistic_h
#define Statistic_h

#include <stdio.h>
#include <stdlib.h>

typedef struct data_file {
  float d;
  struct Data_file *sig;
}Data;

#ifdef Statistic_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


#undef Euler_IMPORT
#undef EXTERN
#endif /* Euler_h */
