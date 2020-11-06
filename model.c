//  Authors     :   Ulises Magaña, Isaac Odriozola, José Antonio Pérez
//  File´s name :   model.c
//  Date        :   03 November 2020
//  Description :   This program is an implementation of a DataShell. It reads and
//                  stores values from a CSV file. It gets different types of data
//                  in order to separate and validate them.

#include <stdlib.h>


#define model_IMPORT
#include "model.h"


//  FUNCTIONS


//  Function    :   tokenize_data()
//  Description :   This function tokenizes the data it receives from the
//                  file and then parses them into their respective type of
//                  data.
//  Parameters  :   FILE *file: File that gets its lines read
//                  MOVIES movies[]: Array of structures to save the databases'
//                  attributes
//  Returns     :   void

void tokenize_data(FILE *file, MOVIES movies[]) {
    int row = 0, file_position = 0;
    char *token;
    char line[BUFSIZ];

    fseek(file, file_position, SEEK_SET);

    while(fgets(line, BUFSIZ, file) != NULL) {
        
        // idUser
        token = strtok(line, ",");
        token = strdup(token);
        movies[row].userId = strtod(token, NULL);

        // userName
        token = strtok(NULL, ",");
        token = strdup(token);
        strcpy(movies[row].userName, token);

        // age
        token = strtok(NULL, ",");
        token = strdup(token);
        movies[row].userAge = strtod(token, NULL);
        
        // movie
        token = strtok(NULL, ",");
        token = strdup(token);
        strcpy(movies[row].movie, token);
        
        // genre
        token = strtok(NULL, ",");
        token = strdup(token);
        strcpy(movies[row].genre, token);
        
        // rate
        token = strtok(NULL, "\n");
        token = strdup(token);
        movies[row].rate = strtod(token, NULL);
        
        row++;

    }

    return;
}