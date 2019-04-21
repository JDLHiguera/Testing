#ifndef MODULARIDAD_2019_ADMIN_H
#define MODULARIDAD_2019_ADMIN_H



typedef enum {JGD,ADM}perfil;
typedef enum {OFF,ON,BQ,EJ,EE,GO}estado;

//jugadores
typedef struct {
    char nickname[20];
    char nombre_completo[50];
    int nivel;
    int vida;
    int escudo;
    char est[3];
    int cartera;
    int partidas_jugadas;
    int partidas_ganadas;
    char perf[3];
    char contrasena[14];
}jugadores;

	int nJugadores;
	jugadores *vJugadores;


void cargarJugadores(jugadores **vJugadores, int *n);
void guardarJugadores(jugadores *u, size_t tam);

char nickname_buscador[20];

#endif //MODULARIDAD_2019_ADMIN_H
