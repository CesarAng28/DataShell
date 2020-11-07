/*
  Autor: Gustavo Luna Maya y Sergio Medina Galàn
  
  main.c
*/

//Librerias estandar
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Librerias que se invocaran.
#include "files.h"


/*Funciòn main donde se inicia la lectura del archivo csv, se separa la informaciòn
  por medio de tokens y se escribe en un arreglo de tipo flotante.*/
int main()	{

char temporal[100];

char ***valores = NULL;	//Valores va a contener todos los valores leidos
int *campos_por_linea = NULL;

char *pivote = NULL;
int lineas = 0;
int campos = 0;
int longitud = 0;
int i,j;
FILE *archivo = NULL;
float buffer [5][5];


  archivo = file_new("datos.csv","r");
	if(archivo != NULL)	{
		do	{
			memset(temporal,0,100);
			fgets(temporal,100,archivo);
			lineas++;
			valores = realloc(valores,lineas*sizeof(char*));
			campos_por_linea = realloc(campos_por_linea,lineas*sizeof(int));
			valores[lineas-1] = NULL;
			pivote = strtok(temporal,",");
			campos = 0;
			while (pivote != NULL)	{
				campos++;
				valores[lineas-1] = realloc(valores[lineas-1],sizeof(char*)*campos);
				longitud = strlen(pivote);
				valores[lineas-1][campos -1] = calloc(longitud+1,sizeof(char));
				strncpy(valores[lineas-1][campos -1],pivote,longitud);
				pivote = strtok(NULL, ",");
			}
			campos_por_linea[lineas-1] = campos;
		}while(feof(archivo) == 0);
		fclose(archivo);

		printf("Mostrando valores leidos\n");
		i = 0;
		while(i < lineas)	{
			j = 0;
			printf("Linea %i\n",i+1);
			while(j < campos_por_linea[i])	{
			  float salida=(float)strtod(valores[i][j],NULL);//Se transfroma el arreglo de char a uno de flotantes.
		buffer [i][j];
                printf("Datos %i: %f\n",j+1,salida);// Aqui es donde se procesarian los campos para transformarlos a valores enteres flotantes etc....
			fwrite(buffer,5,1,stdout);

				
				j++;
			}
			i++;
		}
	}
	else	{
		printf("Error leyendo el archivo\n");
	}
	fwrite(buffer,5,1,stdout);//Se escribe en el buffer
}
