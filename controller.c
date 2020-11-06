//  Authors     :   Ulises Magaña, Isaac Odriozola, José Antonio Pérez
//  File´s name :   controller.c
//  Date        :   03 November 2020
//  Description :   This program is an implementation of a DataShell. It reads and
//                  stores values from a CSV file. It gets different types of data
//                  in order to separate and validate them.

#include <stdlib.h>


#define controller_IMPORT
#include "controller.h"

//  FUNCTIONS


//  Function    :   new_file()
//  Description :   This function instanciates a new file pointer identified
//                  via its name and mode.
//  Parameters  :   char *name: Name of the file
//                  char *mode: Mode of file to be opened {r, rb, a, ab, w, wb}
//  Returns     :   FILE my_file: if file is not NULL

FILE * new_file(char *name, char *mode) {
    FILE * my_file = NULL;
    my_file = fopen(name, mode);

    if(my_file == NULL) {
        puts("FILE OPEN ERROR");
        return NULL;
    }
    else
        return my_file;
}


//  Function    :   count_rows_columns()
//  Description :   This function counts the rows and columns from the file
//                  that it receives.
//  Parameters  :   FILE *file: File that gets its lines read
//                  int *rows: Number of rows to be counted at the file
//                  int *columns: Number of columns of each row at the file
//  Returns     :   void

void count_rows_columns(FILE *file, int *rows, int *columns) {
    
    int index = 0;
    char line[BUFSIZ];
    
    while(fgets(line, BUFSIZ, file) != NULL) {
        
        if(*rows == 0) {
            while(line[index] != '\n') {
                if(line[index] == ',') {
                    *columns += 1;
                }
                index++;
            }
            *columns += 1;
        }

        *rows += 1;
    }
    
    return;

}
