#ifndef TETRISFUNC_H_INCLUDED
#define TETRISFUNC_H_INCLUDED

    #include "tetrisclass.h"

    const int _H = 50, _W = 50;
    int X = 0, Y = 0;

     espacio cuadricula[_W][_H];

    void rastrillar(const int &_W, const int &_H);//comprobar que se haya completado una linea
    void eliminar_linea(const int &linea);//eliminar una linea, solo va a ser llamada por la funcion "rastrillar"
    void pintar_cuadricula();//pintará la cuadricula
    void movimiento();//movimiento de la pieza que tiene el "foco"
    void desocupar_espacio(const int &X, const int &Y);//desocupa un spacio en la cuadricula
    void ocupar_espacio(const int &X, const int &Y, const int &color);
    void _lineax(const int &X, const int &W, const int &Y, const int &color);//pinta una linea y ocupa los espacios pintados


    void rastrillar(const int &_W, const int &_H){
        bool completada = true;
        for(int i = 0; i < _H; i++){
            for(int j = 0; j < _W; j++){
                if(cuadricula[j][i].getOcupado() == false)
                    completada = false;
            }
            if(completada)
                eliminar_linea(i);
        }
    }

    void eliminar_linea(const int &linea){
        for(int i = 0; i < _W; i++){
            cuadricula[i][linea].setOcupado(false);
            cuadricula[i][linea].setColor(0);
        }
    }

    void pintar_cuadricula(){
        for(int i = 0; i < _W; i++){
            for(int j = 0; j < _H; j++){
                pixel(i, j, 219, cuadricula[i][j].getColor(), cuadricula[i][j].getColor());
            }
        }
    }

    void movimiento(){
        if(keydown(VK_LEFT) && X > 0 && cuadricula[X - 1][Y].getOcupado() != true){
            desocupar_espacio(X, Y);
                X--;
            ocupar_espacio(X, Y, 11);
        }
        if(keydown(VK_RIGHT) && X < _W - 1 && cuadricula[X + 1][Y].getOcupado() != true){
            desocupar_espacio(X, Y);
                X++;
            ocupar_espacio(X, Y, 11);
        }
        if(keydown(VK_UP) && Y > 0 && cuadricula[X][Y - 1].getOcupado() != true){
            desocupar_espacio(X, Y);
                Y--;
            ocupar_espacio(X, Y, 11);
        }
        if(keydown(VK_DOWN) && Y < _H - 1 && cuadricula[X][Y + 1].getOcupado() != true){
            desocupar_espacio(X, Y);
                Y++;
            ocupar_espacio(X, Y, 11);
        }
    }

    void desocupar_espacio(const int &X, const int &Y){
        cuadricula[X][Y].setOcupado(false);
        cuadricula[X][Y].setColor(0);
    }

    void ocupar_espacio(const int &X, const int &Y, const int &color){
        cuadricula[X][Y].setOcupado(true);
        cuadricula[X][Y].setColor(color);
    }

        void _lineax(const int &X, const int &W, const int &Y, const int &color){
        int j = X, i = 0;
         while(i < W){
            ocupar_espacio(j, Y, color);
            j++;
            i++;
        }
    }

    //FUNCIONES DE LA CLASE ESPACIO

    bool espacio::getOcupado(){return this->ocupado;}
    void espacio::setColor(const int &color){this->color = color;}
    void espacio::setOcupado(const bool &nuevo_estado){this->ocupado = nuevo_estado;}
    int espacio::getColor(){return this->color;}

    //FIN FUNCIONES CLASE ESPACIO


#endif // TETRISFUNC_H_INCLUDED
