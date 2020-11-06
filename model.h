//  Authors     :   Ulises Magaña, Isaac Odriozola, José Antonio Pérez
//  File´s name :   model.h
//  Date        :   03 November 2020
//  Description :   This program is an implementation of a DataShell. It reads and
//                  stores values from a CSV file. It gets different types of data
//                  in order to separate and validate them.

#ifndef model_h
#define model_h

/*
* System headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

#include <stdio.h>
#include <string.h>

/*
* Application specific headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

/* Constants declarations. */

/* Set EXTERN macro: */

#ifndef model_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

/* Types declarations. */

typedef struct movies {
    float userId;
    char userName[100];
    float userAge;
    char movie[250];
    char genre[100];
    float rate;
} MOVIES;

/* Global variables declarations. */


/* Function prototypes. */


//  Function    :   tokenize_data()
//  Description :   This function tokenizes the data it receives from the
//                  file and then parses them into their respective type of
//                  data.
//  Parameters  :   FILE *file: File that gets its lines read
//                  MOVIES movies[]: Array of structures to save the databases'
//                  attributes
//  Returns     :   void

EXTERN void tokenize_data(FILE *file, MOVIES movies[]);



#undef model_IMPORT
#undef EXTERN

#endif /* model_h */