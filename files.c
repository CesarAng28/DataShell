/*
  Autores: Gustavo Luna Maya y Sergio Medina Galàn
  Fecha: 07/11/2020
  Archivo: files.c
*/

//Librerias standar
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Librerias que invocaremos
#include"files.h"

/**
 * Instanciates a new file pointer identified via its name and mode.
 * @param
 *  name (char *):
 *      Name of the file
 *  mode (char *):
 *      Mode of file to be opened {r, rb, a, ab, w, wb}
 *
 * @return FILE * opened_file.
*/
extern FILE * file_new( char * name, char *mode)
{
  FILE *fp;
  fp = fopen(name,mode);
  return fp;
}

/**
 * Writes a bidimensional buffer array into a file.
 * @param
 *  file (FILE *):
 *      Storage file
 *  columns (size_t ):
 *      length of the buffer array
 *  buff [ ][columns] (long double):
 *      RAM matrix
 *  rows (size_t):
 *      width of the storage buffer
 *
 * @return void.
*/
extern void file_num_write(FILE * file, size_t columns, long double buff[] [columns], size_t rows)
{
   char linea[10];
   sprintf(linea,"%zu %zu \n",rows,columns);
   // fputs (linea, file);
  for (size_t i =0; i<rows; i++){
    linea[0] = '\0';
   

      char buffer[8];
      for(int j =0; j<=2; j++){
    fprintf(file,"%1.5Lf \t",buff[i][j]);
   
      strcat(linea,buffer);
      }
      fprintf(file,"\n");
      int len = strlen(linea);
    linea[len-1] = '\n'; 
    fputs(linea,file);
      
    }
    }
    
  
