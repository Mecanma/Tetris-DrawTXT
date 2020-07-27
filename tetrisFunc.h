#ifndef TETRISFUNC_H_INCLUDED
#define TETRISFUNC_H_INCLUDED

    #include "tetrisclass.h"
    #include "interfaces.h"

    const int _H = 32, _W = 16;
    int X = 4, Y = 0;
    bool Game_over(false);

    int puntaje(0);
    jugador jugador_actual;

    tetramino* pieza_punt = NULL; tetramino* pieza_punt_nxt = NULL;

     espacio cuadricula[_W][_H];
     jugador jugadores[10];

    void rastrillar(const int &_W, const int &_H);//comprobar que se haya completado una linea
    void eliminar_linea(const int &linea);//eliminar una linea, solo va a ser llamada por la funcion "rastrillar"
    void pintar_cuadricula();//pintará la cuadricula
    void movimiento(tetramino &T);//movimiento de la pieza que tiene el "foco"
    void desocupar_espacio(const int &X, const int &Y, const bool &foco = false);//desocupa un spacio en la cuadricula
    void ocupar_espacio(const int &X, const int &Y, const int &color, const bool &foco = false);
    void _lineax(const int &X, const int &W, const int &Y, const int &caracter, const int &fondo, const int &texto);//pinta una linea horizontal
    void _lineay(const int &X, const int &W, const int &Y, const int &caracter, const int &fondo, const int &texto);//pinta una linea vertical
    void GUI();//interfaz de usuario
    std::string my_itos(int num);//convertir un numero a cadena
    tetramino* fabrica();//fabrica el tetramino
    void pantalla_creditos();//son los creditos duh
    void oscurecer_pantalla();//torna oscura la pantalla
    void pantalla_puntuaciones();//tabla de puntuaciones (el podio)


    std::string my_itos(int num){
        std::string cad_aux, cad_definitiva;
        int aux;

        while(num != 0){
            aux = num % 10;
            cad_aux += (char)(aux + 48);
            num /= 10;
        }
        for(int i = cad_aux.length() - 1; i > -1; i--){
            cad_definitiva += cad_aux.at(i);
        }

        return cad_definitiva;
    }


    bool cargar_puntajes(){
        bool exito(true);
        std::string linea;
        std::ifstream archivo;
        jugador tmp;
        char aux;
        int cont(0);

        archivo.open("puntajes.txt");

        if(!archivo.is_open())
            return exito = false;
        else{
            do{
                archivo >> tmp.puntuacion;
                archivo >> tmp.nombre;
                archivo.get(aux);
                jugadores[cont] = tmp;
                cont++;
            }while(tmp.nombre != "XXX" && cont < 10);
            archivo.close();
            return exito;
        }

    }

    void guardar_puntajes(){
        std::ofstream archivo;
        archivo.open("puntajes.txt");

        for(int i = 0; i < 10; i++){
            archivo << jugadores[i].puntuacion << "\n";
            archivo << jugadores[i].nombre << "\n";
        }

        archivo << "XXX";

    archivo.close();
    }

    int ordenar_jugadores(jugador &J){
       int cont(0);
       jugador tmp;

       if(J.puntuacion < jugadores[9].puntuacion)
            return -1;

        while(J.puntuacion < jugadores[cont].puntuacion)
            cont++;

                tmp = jugadores[cont];
            for(int i = cont + 1; i < 10 - 1; i++){
                jugadores[i] = tmp;
                tmp = jugadores[i + 1];
            }


        jugadores[cont] = J;

        return cont;
    }

    void mostrar_tabla(int pos){
        int linea = 4;
        std::string puntos;
        std::string flecha("   ");
        int color(0);
        for(int i = 0; i < 10; i++){

            if(pos != -1){
                i == pos ? color = 14 : color = 15;
                i == pos ? flecha = "-> " : flecha = "   ";
            }
            jugadores[i].puntuacion == 0 ? puntos = '0' : puntos = my_itos(jugadores[i].puntuacion);

            texto(4, linea += 1, flecha + jugadores[i].nombre + "............" + puntos, 0, color);
        }
    }



    void rastrillar(){
        for(int i = _H; i > 0; i--){
            bool completada = true;
                for(int j = 1; j < _W - 2; j++){
                    if(cuadricula[j][i].getOcupado() == false || cuadricula[j][i].getFoco() == true)
                        completada = false;
                }
            if(completada){
                puntaje += 15;
                eliminar_linea(i);
            }
        }

        //verificar si la partida ha sido perdida
        for(int i = 1; i < _W - 2; i++){
            if(cuadricula[i][6].getOcupado() == true &&
                cuadricula[i][6].getFoco() == false){
                    Game_over = true;
                }
        }

    }//rastrillar(int, int)



    void eliminar_linea(const int &linea){
        for(int i = 1; i < _W - 2; i++)
            desocupar_espacio(i, linea);

        int color;
    //hacer "caer" las lineas de arriba
         for(int i = linea - 1; i > 0; i--){//empezamos desde la linea arriba de la que se acaba de eliminar
                for(int j = 1; j < _W - 2; j++){//vamos bajando las lineas
                        if(cuadricula[j][i].getOcupado() == true && cuadricula[j][i].getFoco() == false){
                            color = cuadricula[j][i].getColor();
                            desocupar_espacio(j, i);
                            ocupar_espacio(j, i + 1, color);
                        }//if
                    }//for
                }//for
    }//fin eliminar_linea

    void pintar_cuadricula(){
        for(int i = 1; i < _W - 1; i++){
            for(int j = 7; j < _H; j++){
                pixel(i, j - 7, 219, cuadricula[i][j].getColor(), cuadricula[i][j].getColor());
            }
        }
    }

     void movimiento(tetramino* T){
        T->mover();
    }

    void desocupar_espacio(const int &X, const int &Y, const bool &foco){
        cuadricula[X][Y].setOcupado(false);
        cuadricula[X][Y].setColor(0);
        cuadricula[X][Y].setFoco(foco);
    }

    void ocupar_espacio(const int &X, const int &Y, const int &color, const bool &foco){
        cuadricula[X][Y].setOcupado(true);
        cuadricula[X][Y].setColor(color);
        cuadricula[X][Y].setFoco(foco);
    }

    tetramino* fabrica(const int &num){
        switch(num){
            case 1:
                return new tetramino_I;
            case 2:
                return new tetramino_O;
            case 3:
                return new tetramino_T;
            case 4:
                return new tetramino_J;
            case 5:
                return new tetramino_Z;
            case 6:
                return new tetramino_S;
            case 7:
                return new tetramino_L;
        }
    }


        void _lineax(const int &X, const int &W, const int &Y, const int &caracter, const int &fondo, const int &texto){
        int j = X, i = 0;
         while(i < W){
            pixel(j, Y, caracter, fondo, texto);
            j++;
            i++;
        }
    }

    void _lineay(const int &X, const int &H, const int &Y, const int &caracter, const int &fondo, const int &texto){
        int j = Y, i = 0;
         while(i < H){
          pixel(X, j, caracter, fondo, texto);
            j++;
            i++;
        }
    }

    void oscurecer_pantalla(){
        for(int i = 0; i < 26; i++){
            for(int j = 0; j < 46; j++){
                pixel(j, i, 219, 0, 0);
            }
        }
    }


    //FUNCIONES DE LA CLASE ESPACIO
    //GETTERS
    bool espacio::getOcupado(){return ocupado;}
    int espacio::getColor(){return color;}
    bool espacio::getFoco(){return foco;}
    //SETTERS
    void espacio::setColor(const int &tinte){color = tinte;}
    void espacio::setOcupado(const bool &nuevo_estado){ocupado = nuevo_estado;}
    void espacio::setFoco(const bool &nuevo_estado){foco = nuevo_estado;}
    //FIN FUNCIONES CLASE ESPACIO

    enum{
        left,
        right,
        down
    };

    //FUNCIONES DE LOS TETRAMINOS

        void tetramino::eliminar_foco(){
            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                        if(i + Y  < _H &&
                        j + X  > 0 &&
                        j + X  < _W - 1)
                            if(cuadricula[j + X][i + Y].getFoco() == true)
                                cuadricula[X + j][Y + i].setFoco(false);
                    }
                }
            }


        int tetramino::getColor() const {return this->color;}

        void tetramino::mover(){

        if(pieza_punt){

            if(keydown('Z'))
                rotar_L();
            if(keydown('X'))
                rotar_R();


            if(keydown(VK_LEFT) && validar_movimiento(left)){
                    desocupar_cuadricula(X, Y);
                    X--;
                    ocupar_cuadricula(X, Y, this->getColor());
                }

                if(keydown(VK_RIGHT) && validar_movimiento(right)){
                    desocupar_cuadricula(X, Y);
                    X++;
                    ocupar_cuadricula(X, Y, this->getColor());
                }

                if(validar_movimiento(down)){
                    desocupar_cuadricula(X, Y);
                    Y++;
                    ocupar_cuadricula(X, Y, this->getColor());
                }

                if(!validar_movimiento(down)){
                    puntaje += 1;
                    delete pieza_punt;
                    eliminar_foco();
                    Y = 0; X = 4;
                    pieza_punt = pieza_punt_nxt;
                    pieza_punt_nxt = NULL;
                }

            }//if pieza_punt
        }//fin tetramino::mover


            bool tetramino::validar_movimiento(const int &type){
                 int direccionX(0), direccionY(0);
                bool valido(true);

        switch(type){
            case left:
                direccionX = -1;
                break;
            case right:
                direccionX = 1;
                break;
            case down:
                direccionY = 1;
                break;

                }

        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){

                if(this->posiciones[current_pos][i][j] == true){//buscar el cuadrado
                    if(i + Y + direccionY > _H - 1 ||
                        j + X + direccionX < 1 ||
                        j + X + direccionX > _W - 2)//verificar que no salga de área jugable
                            return valido = false;

                    if(cuadricula[j + X + direccionX][i + Y + direccionY].getFoco() == false &&
                        cuadricula[j + X + direccionX][i + Y + direccionY].getOcupado() == true)//verificar que no haya colisión a la hora de moverse
                            return valido = false;
                    }
                }

            }


        return valido;
           }


           void tetramino::desocupar_cuadricula(const int &X, const int &Y){
                for(int i = 0; i < 4; i++){
                    for(int j = 0; j < 4; j++){
                        if(this->posiciones[current_pos][i][j] == true)
                            desocupar_espacio(j + X, i + Y);
                    }
                }
           }

            void tetramino::ocupar_cuadricula(const int &X, const int &Y, const int &tinte){

                for(int i = 0; i < 4; i++){
                    for(int j = 0; j < 4; j++){
                        if(this->posiciones[current_pos][i][j] == true)
                            ocupar_espacio(j + X, i + Y, tinte, true);
                    }
                }
           }

           void tetramino::rotar_L(){
                bool valido = true;
                int aux(0);

                current_pos - 1 < 0 ? aux = this->max_pos - 1 : aux = current_pos - 1;

                 for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){

                if(this->posiciones[aux][i][j] == true){//buscar el cuadrado
                    if(i + Y > _H - 1 ||
                        j + X < 1 ||
                        j + X > _W - 2){//verificar que no salga de área jugable
                            valido = false; break;
                            }

                    if(cuadricula[j + X][i + Y].getFoco() == false &&
                        cuadricula[j + X][i + Y].getOcupado() == true){//verificar que no haya colisión a la hora de moverse
                            valido = false; break;
                            }
                    }
                }
                if(!valido) break;
            }
            if(valido){
            desocupar_cuadricula(X, Y);//desocupar antes de la rotación
                current_pos = aux;
                ocupar_cuadricula(X, Y, this->getColor());
            }
           }
           void tetramino::rotar_R(){
                bool valido = true;
                int aux(0);

                current_pos + 1 > this->max_pos - 1 ? aux = 0 : aux = current_pos + 1;

                 for(int i = 0; i < 4; i++){
                    for(int j = 0; j < 4; j++){

                        if(this->posiciones[aux][i][j] == true){//buscar el cuadrado
                            if(i + Y > _H - 1 ||
                                j + X < 1 ||
                                j + X > _W - 2){//verificar que no salga de área jugable
                                    valido = false; break;
                                }

                        if(cuadricula[j + X][i + Y].getFoco() == false &&
                            cuadricula[j + X][i + Y].getOcupado() == true){//verificar que no haya colisión a la hora de moverse
                                valido = false; break;
                                }
                        }
                    }
                    if(!valido) break;
                }
                if(valido){
                    desocupar_cuadricula(X, Y);//desocupar antes de la rotación
                    current_pos = aux;
                    ocupar_cuadricula(X, Y, this->getColor());
                }

            }


    //FIN FUNCIONES TETRAMINOS


#endif // TETRISFUNC_H_INCLUDED
