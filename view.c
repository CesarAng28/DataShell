//  Authors     :   Ulises Magaña, Isaac Odriozola, José Antonio Pérez
//  File´s name :   view.c
//  Date        :   03 November 2020
//  Description :   This program is an implementation of a DataShell. It reads and
//                  stores values from a CSV file. It gets different types of data
//                  in order to separate and validate them.

#include <stdlib.h>


#define view_IMPORT
#include "view.h"

//  FUNCTIONS

//  Function    :   print_parsed_data()
//  Description :   This function prints the parsed data from the CSV file to be
//                  read.
//  Parameters  :   int rows: Number of rows in the CSV file
//                  MOVIES movies[]: Array of structures to be printed
//  Returns     :   void

void print_parsed_data(int rows, MOVIES movies[]) {
    
    for(int index = 0; index < rows; index++) {
        printf("%.0f ", movies[index].userId);
        printf("%s ", movies[index].userName);
        printf("%.0f ", movies[index].userAge);
        printf("%s ", movies[index].movie);
        printf("%s ", movies[index].genre);
        printf("%.2f\n", movies[index].rate);
    }

}