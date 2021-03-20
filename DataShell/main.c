//
//  main.c
//  line_parser.c
//
//  Created by Cesar Angeles on 06/11/2020.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "line_parser.h"
   

                   
int main(){
    // Write C code here
    printf("Hello world\n");
    
    
    char buff[BUFSIZ] = {'\0'}; // Data access buffer
    
    size_t numbers = 0; // Numbers to be encoded per row
    
    double *line = NULL; // New row of the database
    
    FILE * data;
    double *mat[BUFSIZ] = {NULL}; // DataBase base pointer
    
    size_t lines = 0; // Rows number
    
    
    
    data = fopen("./data.csv","r");
    
    if(data == NULL){
        puts("Error");
        exit(1);
    }
    
    
    for(lines = 0; fgets(buff, BUFSIZ, data) ; lines++)
    {
        numbers = 0;
        puts(buff);
        line = row_gen(buff, strlen(buff), ',', &numbers);
        mat[lines] = line;
        print_row(line, numbers);
        clean_buff(buff, BUFSIZ, '\0');
    }
    
    print_table(lines, numbers, mat);
    
    return 0;
}
