//
//  main.c
//
//
//  Created by Alejandro Solorzano Santos.
//
/**
* Our sample program.
* @copyright 2020 by TDA
* @license as you wish
* @author Alejandro Solorzano Santos.
* @version 2020-10-08
* @file
*/


/* Include standard headers: */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/* Include modules header we directly invoke here: */
#include "Statistic.h"
#include "File.h"



int main(int argc, char **argv)
{
    FILE *fp;
    Data **first,*node,**aux;
    first =NULL;
    char name[50];
    printf("Ingresa el nombre del archivo\n");
    scanf("%s",name);
    fp = File_new (name);
    File_read (fp,first,aux,node);
    return 0;
}
