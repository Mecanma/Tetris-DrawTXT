    #include "headers/drawtxt.h"
    #include "headers/tetrisFunc.h"
    #include "headers/Interfaces.h"
    #include <ctime>
    #include <cstdlib>


    //La implementaci�n de la funcion _lineax() y _lineay() est� basada en la implementacion
    //de la funcion lineax() de la libreria "drawtxt"

    int main(){
    srand(time(NULL));
    iniciar(46, 26, "TETRIS");



       while(1){
            int num = 1 + rand() % (7 + 1 - 1);

            if(!pieza_punt)//primera iteraci�n
                pieza_punt = fabrica(1 + rand() % (7 + 1 - 1));
            if(!pieza_punt_nxt)//dem�s iteraciones
                pieza_punt_nxt = fabrica(num);


            rastrillar();//verificar si: se ha completado una linea y  si se ha terminado la partida

            movimiento(pieza_punt);//mover/rotar el tetramino

            pintar_cuadricula();//pintar la cuadricula(pintar los tetraminos en el �rea jugable)
            GUI();//interfaz de juego

            if(Game_over){
                delete pieza_punt; delete pieza_punt_nxt;
                jugador_actual.puntuacion = puntaje;
                pantalla_puntuaciones(jugador_actual);
                pantalla_creditos();
                break;
            }


            pintar(130);
            }

            return 0;
        }
