#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Statistic.h"

FILE * File_new (char * name){
  FILE *fp;
  fp = fopen (name,"rt");
  if  (fp == NULL){
    printf ("El archivo no existe.\n");
    exit (0);
  }
  return fp;
}

void File_read (FILE * fp, Data **first, Data **aux, Data *node){
  float num;
  while (!feof (fp)){
    fscanf (fp,"%d",&num);
    node=malloc (sizeof (Data));
    if (node==NULL){
      printf ("No se asigno el espacio en memoria.\n");
      exit (0);
    }
    node->d=num;
      if (*first==NULL){
        *first=node;
      }
      else{
        (*aux)->sig= node;
      }
      *aux=node;
      node->sig=NULL;
  }
}
