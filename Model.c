#include "DataShell.h"

//Function that prints a Matrix
void printMatrix (float **Matrix, int *numLines, int *numElements)
{
    for(int i = 0; i < *numLines; i++)
    {
        for(int j = 0; j < *numElements; j ++)
        {
            printf("%.6f ", *((*(Matrix+i))+j));
        }
        printf("\n");
    }
}

//Function that reads DB and stores it in a Matrix
void readDB (float **Matrix, char *fileName, int numElements)
{
    char buff[255];
    char * value;
    float *ptr = NULL;
    int cont = 0, n =0;

    FILE *file = openMyfile(fileName);

    while(!feof(file))
    {
        fscanf(file, "%s", buff);

        //numElements = countElements(buff);
        float *ptr = malloc(sizeof(float) * numElements);
        value = strtok(buff, ",");

        while(value != NULL)
        {
            ptr[cont] = atof(value); //Stores value into ptr 
            cont ++;
            value = strtok(NULL, ",");
        }
        cont = 0;
        Matrix[n] = ptr; //Matrix now points to ptr
        n ++;

    }
    closeMyfile(file);

    return;
}

//Function that tells how many elements does a csv line has
int countElements(char *fileName)
{
    int numElements = 0;
    char buff[255];

    FILE *file = openMyfile(fileName);
    fscanf(file, "%s", buff);
    char* value = strtok(buff, ",");

    while(value != NULL)
    {
        numElements ++;
        value = strtok(NULL, ",");
    }
    //printf("num = %d ", numElements);
    closeMyfile(file);
    return numElements;
}

//Function that opens a file
FILE* openMyfile (char *fileName)
{
    FILE *file = fopen(fileName, "r");

    if(file == NULL)
    {
        printf("Couln´t open file\n");
        exit(0);
    }
    return file;
}

//Function that closes a file
void closeMyfile(FILE *file)
{
    fclose(file);
}

//Function that return number of lines
int NumberLines(char *fileName)
{
    int numLines = 0;
    char buff[255];

    FILE *file = openMyfile(fileName);

    while(!feof(file))
    {
        fscanf(file, "%s", buff);
        numLines ++;
    }

    closeMyfile(file);

    return numLines;
}
