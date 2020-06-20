    #include "headers/drawtxt.h"
    #include "headers/tetrisFunc.h"

    int main(){
    iniciar(50, 50);

//La implementación de la funcion _lineax() está basada en la implementacion
//de la funcion lineax() de la libreria "drawtxt"

        while(1){

      _lineax(10, 10, 20, 13);
      _lineax(22, 10, 20, 13);


    movimiento();


        pintar_cuadricula();
        pintar(50);
        }


        return 0;
    }
