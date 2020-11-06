//  Authors     :   Ulises Magaña, Isaac Odriozola, José Antonio Pérez
//  File´s name :   controller.h
//  Date        :   03 November 2020
//  Description :   This program is an implementation of a DataShell. It reads and
//                  stores values from a CSV file. It gets different types of data
//                  in order to separate and validate them.

#ifndef controller_h
#define controller_h

/*
* System headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

#include <stdio.h>

/*
* Application specific headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

/* Constants declarations. */

/* Set EXTERN macro: */

#ifndef controller_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

/* Types declarations. */


/* Global variables declarations. */


/* Function prototypes. */

//  Function    :   new_file()
//  Description :   This function instanciates a new file pointer identified
//                  via its name and mode.
//  Parameters  :   char* name: Name of the file
//                  char *mode: Mode of file to be opened {r, rb, a, ab, w, wb}
//  Returns     :   FILE my_file: if file is not NULL

EXTERN FILE * new_file(char *name, char *mode);


//  Function    :   count_rows_columns()
//  Description :   This function counts the rows and columns from the file
//                  that it receives.
//  Parameters  :   FILE *file: File that gets its lines read
//                  int *rows: Number of rows to be counted at the file
//                  int *columns: Number of columns of each row at the file
//  Returns     :   void

EXTERN void count_rows_columns(FILE *file, int *rows, int *columns);



#undef controller_IMPORT
#undef EXTERN

#endif /* controller_h */