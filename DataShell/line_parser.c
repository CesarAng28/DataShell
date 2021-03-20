//
//  line_parser.c
//  line_parser.c
//
//  Created by Cesar Angeles on 10/11/2020.
//

#include "line_parser.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* module1.h -- Function prototypes */

/**
 * Initializes this module. Should be called in main() once for all.
 */

/**
 * void clean_buff(char * buff, size_t len, char val)
 *
 *      Function to initialise or set buffer to a known state
 *          @param buff (char *) Value to add to the tree.
 *          @param len (size_t) Value to add to the tree
 *          @param val Value to add to the tree
 *
 *
 *
 */

void clean_buff(char * buff, size_t len, char val){
    size_t idx = 0;
    
    for(idx=0; idx<len; idx++){
        buff[idx] = val;
    }
}

/**
 * size_t delim_count(char *buff, size_t len, char del)
 *
 *      Counts the number of formatted values within the selected row in buff.
 *          @param buff (char *) Value to add to the tree.
 *          @param len (size_t) Value to add to the tree
 *          @param del Value to add to the tree
 *
 *          @return Number of formatted values (size_t)
 *
 */


size_t delim_count(char *buff, size_t len, char del){
    char * temp;
    size_t num = 0;
    
    for(temp = buff; temp<buff+len; temp++){
        if(*temp == del)
            num++;
    }
    return num;
}

/**
 * void print_row(double *arr, size_t num)
 *
 *      Counts the number of formatted values within the selected row in buff.
 *          @param arr (double **) Value to add to the tree.
 *          @param num (size_t) Value to add to the tree
 *
 *
 */


void print_row(double *arr, size_t num){
    size_t index;
    for(index = 0; index<num; index++){
        printf("%lf,", arr[index]);
        
    }
}

/**
 * double * row_gen(char* buffer,size_t bufsize, char delim, size_t * numbers)
 *
 *      Generate a row of a matrix to be stored at a collection of doubles
 *
 *          @param buffer (double **) Value to add to the tree.
 *          @param bufsize (size_t) Value to add to the tree
 *          @param delim (size_t) Value to add to the tree
 *          @param numbers (size_t *) Value to add to the tree
 *
 *
 */


double * row_gen(char * buffer, size_t bufsize, char delim, size_t * numbers){
    
    char * ptr;
    double temp = 0;
    size_t count = 0, index = 0;
    double * my_line = NULL;
    
    count = delim_count(buffer, bufsize, delim);
    
    my_line = malloc(sizeof(double)*(count+2));
    
    
    for(ptr = buffer; ptr <= (buffer+bufsize); ptr++){
        
        if(*ptr == '\n'|| *ptr == '\r' || *ptr == '\0'|| *ptr == ' ')
            continue;
        
        temp = strtof(ptr, &ptr);
        my_line[index] = temp;
        index++;
        (*numbers)++;
        count ++;
        
    }
    
    return my_line;
}

/**
 * void print_table(size_t rows, size_t columns, double **base)
 *
 *      Generate a row of a matrix to be stored at a collection of doubles
 *
 *          @param rows ( size_t) Value to add to the tree.
 *          @param columns (size_t) Value to add to the tree
 *          @param base (double **) Value to add to the tree
 *
 */

void print_table(size_t rows, size_t columns, double **base){
    
    size_t m, n ;
    
    for (n=0; n<rows; n++){
        printf("|");
        for(m=0; m<columns; m++){
            printf("\t%lf\t|",base[n][m]);
        }
        printf("\n");
    }
    
}
