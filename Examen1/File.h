//
//  File.h
//
//
//  Created by Alejandro Solorzano Santos.
//

#ifndef File_h
#define File_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Statistic.h"

#ifdef File_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


/* File.h -- Function prototypes */

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
EXTERN FILE * File_new(char *name);



/**
 * Writes a dynamic list into a file.
 * @param
 *  file (FILE *):
 *      Storage file
 *  first (conditions):
 *      The first node of the dynamic list
 *  aux (conditions):
 *      The auxiliary of the dynamic list
 *  node (conditions):
 *      The actual node of the dynamic list
 *
 * @return void.
*/

//EXTERN void File_write (FILE * file, conditions *first, conditions *aux, conditions *node);

EXTERN void File_read (FILE * fp, Data **first, Data **aux, Data *node);
#undef files_IMPORT
#undef EXTERN



#endif /* Files_h */
