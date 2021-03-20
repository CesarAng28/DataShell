//
//  line_parser.h
//  line_parser.c
//
//  Created by Cesar Angeles on 10/11/2020.
//

#ifndef line_parser_h
#define line_parser_h

#include <stdio.h>

void clean_buff(char * buff, size_t len, char val);

size_t delim_count(char *buff, size_t len, char del);

void print_row(double *arr, size_t num);

double * row_gen(char* buffer,size_t bufsize, char delim, size_t * numbers);

void print_table(size_t rows, size_t columns, double **base);



#endif /* line_parser_h */
