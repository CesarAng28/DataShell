//  Authors     :   Ulises Magaña, Isaac Odriozola, José Antonio Pérez
//  File´s name :   view.h
//  Date        :   03 November 2020
//  Description :   This program is an implementation of a DataShell. It reads and
//                  stores values from a CSV file. It gets different types of data
//                  in order to separate and validate them.

#ifndef view_h
#define view_h

/*
* System headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

#include <stdio.h>
#include "model.h"

/*
* Application specific headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

/* Constants declarations. */

/* Set EXTERN macro: */

#ifndef view_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

/* Types declarations. */


/* Global variables declarations. */


/* Function prototypes. */

//  Function    :   print_parsed_data()
//  Description :   This function prints the parsed data from the CSV file to be
//                  read.
//  Parameters  :   int rows: Number of rows in the CSV file
//                  MOVIES movies[]: Array of structures to be printed
//  Returns     :   void

EXTERN void print_parsed_data(int rows, MOVIES movies[]);



#undef view_IMPORT
#undef EXTERN

#endif /* view_h */