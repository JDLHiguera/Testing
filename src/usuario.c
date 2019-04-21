#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuario.h"
#include "utilidades.h"




void cargarJugadores(jugadores **vJugadores, int *n)
{
	



	
    FILE *fichero;
	
    char linea[120];             // Guardar de cada linea que leamos del fichero
    char *token;
    
    *n=0;
    *vJugadores=NULL;

	
 


    fichero=fopen("ficheros/jugadores.txt","r");

    if (fichero==NULL){

        puts("Error al abrir el fichero ficheros/jugadores.txt.");

    }else{


        while(fgets(linea,120,fichero))
        {
		

            if (strcmp(linea,"\0")){

                *vJugadores=realloc((jugadores *)(*vJugadores),((*n)+1)*sizeof(jugadores));

                token=strtok(linea,"/");
                strcpy((*vJugadores)[*n].nickname,token);

                token=strtok(NULL,"/");
                strcpy((*vJugadores)[*n].nombre_completo,token);

                token=strtok(NULL,"/");
                (*vJugadores)[*n].nivel=atoi(token);
                
                token=strtok(NULL,"/");
                (*vJugadores)[*n].vida=atoi(token);
				
                token=strtok(NULL,"/");
                (*vJugadores)[*n].escudo=atoi(token);

                token=strtok(NULL,"/");
                strcpy((*vJugadores)[*n].est,token);

                token=strtok(NULL,"/");
                (*vJugadores)[*n].cartera=atoi(token);

                token=strtok(NULL,"/");
                (*vJugadores)[*n].partidas_jugadas=atoi(token);

                token=strtok(NULL,"/");
                (*vJugadores)[*n].partidas_ganadas=atoi(token);

                token=strtok(NULL,"/");
                strcpy((*vJugadores)[*n].perf,token);

                token=strtok(NULL,"\n");
                strcpy((*vJugadores)[*n].contrasena,token);

                (*n)++;

            }

        }
    }

    fclose(fichero);
    
    
}





void guardarJugadores(jugadores *u, size_t tam)
{
    FILE *fichero;
    int i;

    //Escribe en el fichero toda la ristra de jugadores

    fichero=fopen("ficheros/jugadores.txt","w+");

    i = 0;
    if (fichero==NULL){
            puts("No se ha podido modificar el fichero");
    }else{
            while( i < tam-1 )                                    // recorremos el vector de jugadores
            {
                fprintf( fichero, "%s/%s/%d/%d/%d/%s/%d/%d/%d/%s/%s\n", vJugadores[i].nickname,vJugadores[i].nombre_completo,vJugadores[i].nivel,vJugadores[i].vida,vJugadores[i].escudo,vJugadores[i].est,vJugadores[i].cartera,vJugadores[i].partidas_jugadas,vJugadores[i].partidas_ganadas,vJugadores[i].perf,vJugadores[i].contrasena );          // impr en el fichero linea por linea
                i++;
            }
            fprintf( fichero, "%s/%s/%d/%d/%d/%s/%d/%d/%d/%s/%s\n", vJugadores[i].nickname,vJugadores[i].nombre_completo,vJugadores[i].nivel,vJugadores[i].vida,vJugadores[i].escudo,vJugadores[i].est,vJugadores[i].cartera,vJugadores[i].partidas_jugadas,vJugadores[i].partidas_ganadas,vJugadores[i].perf,vJugadores[i].contrasena );

    puts("Se ha guardado los jugadores correctamente");}

}
