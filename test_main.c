//  Authors     :   Ulises Magaña, Isaac Odriozola, José Antonio Pérez
//  File´s name :   test_main.c
//  Date        :   03 November 2020
//  Description :   This program is an implementation of a DataShell. It reads and
//                  stores values from a CSV file. It gets different types of data
//                  in order to separate and validate them.


#include <stdio.h>
#include <stdlib.h>


#include "model.h"
#include "view.h"
#include "controller.h"
#include "test_main.h"


int main(void) {

    int rows = 0, columns = 0;
    char file_name[NAME_SIZE] = "movies.csv";
    FILE *file = NULL;

    file = new_file(file_name, "r");
    count_rows_columns(file, &rows, &columns);

    MOVIES movies[rows];
    
    tokenize_data(file, movies);
    print_parsed_data(rows, movies);

    fclose(file);

    return 0;
}