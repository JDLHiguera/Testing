#include <stdio.h>
#include <stdlib.h>
#include"usuario.h"
#include"utilidades.h"



int main() {
	
	cargarJugadores(&vJugadores,&nJugadores);
	
	printf("Valor final nJugadores: %d\n", nJugadores);
	printf("\n\nVIDA FINAL: %d\n",(vJugadores)[2].vida);
	printf("Nuevo valor vida: ");
	scanf("%d",&vJugadores[2].vida);
	
	
	guardarJugadores(vJugadores, nJugadores);
    
    return 0;
}
