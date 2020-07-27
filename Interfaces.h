#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

    #include <fstream>
    #include <cstdlib>
    #include <cctype>

     void GUI(){

        std::string puntos = my_itos(puntaje);

        ///BORDES
            //bordes área de juego
            _lineay(0, _H - 6, 0, '°', 7, 11);//borde lateral izquierdo
            _lineax(0, _W - 1, _H - 7, '°', 7, 11);//borde inferior
            _lineay(_W - 1, _H - 6, 0, '°', 7, 11);//borde lateral derecho
            _lineax(0, _W - 1, 0, '°', 7, 11);//borde superior

            //bordes GUI
            _lineax(_W - 1, 30, 0, '°', 7, 11);//borde superior
            _lineax(_W - 1, 30, _H - 7, '°', 7, 11);//borde inferior
            _lineay(_W - 1 + 30, _H - 6, 0, '°', 7, 11);//borde lateral derecho
        ///FIN BORDES

        ///CONTROLES
            texto(_W - 1 + 30 - 20, 20, "Controles: ", 0, 3);
            texto(_W - 1 + 30 - 28, 22, "Mover: Flechas de direccion", 0, 3);
            texto(_W - 1 + 30 - 28, 23, "Rotar: <-(Z) ->(X)", 0, 3);
        ///FIN CONTROLES

        ///PUNTAJE
            texto(_W - 1 + 30 - 28, 15, "Puntaje: " + puntos, 0, 3);
        ///FIN PUNTAJE

        ///SIGUIENTE PIEZA
            texto(_W - 1 + 30 - 23, 3, "SIGUIENTE PIEZA", 0, 3);
            _lineay(_W - 1 + 30 - 20, 8, 6, '°', 7, 11);//borde lateral izquierdo
            _lineax(_W - 1 + 30 - 20, 9, 6, '°', 7, 11);//borde superior
            _lineay(_W - 1 + 30 - 12, 8, 6, '°', 7, 11);//borde lateral derecho
            _lineax(_W - 1 + 30 - 20, 9, 13, '°', 7, 11);//borde inferior

                //pintar pieza dentro del recuadro

        if(pieza_punt_nxt){
            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                    if(pieza_punt_nxt->posiciones[0][i][j] == true)
                        pixel(_W - 1 + 30 - 18 + j, 8 + i, 219, pieza_punt_nxt->getColor(), pieza_punt_nxt->getColor());
                    else
                         pixel(_W - 1 + 30 - 18 + j, 8 + i, 219, 0, 0);
                }
            }

        }
        else{//if(pieza_punt)
            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                    pixel(_W - 1 + 30 - 18 + j, 8 + i, 219, 0, 0);
                }
            }
        }
        ///FIN SIGUIENTE PIEZA

    }///FIN GUI()

        void pantalla_creditos(){

        oscurecer_pantalla();

        _lineax(0, 45, 0, '°', 7, 11);//borde superior
        _lineax(0, 45, 25, '°', 7, 11);//borde inferior
        _lineay(0, 25, 0, '°', 7, 11);//borde lateral izquierdo
        _lineay(45, 26, 0, '°', 7, 11);//borde lateral derecho

                texto(15, 3, "FIN DEL JUEGO", 0, 3);
            texto(12, 5, "Tu puntaje fue de: " + my_itos(puntaje), 0, 3);
            texto(6, 7, "GRACIAS POR JUGAR MI JUEGO :)", 0, 3);
            texto(5, 10, "Mi github: ", 0, 3); texto(16, 10, "GITHUB.COM/MECANMA", 0, 11);
            texto(2, 12, "Github del creador de la libreria grafica: ", 0, 3);
            texto(2, 14, "GITHUB.COM/DEQ2000-CYBER", 0, 11);
            texto(2, 16, "Este juego fue hecho con una version", 0, 3);
            texto(2, 17, "desactualizada de la libreria", 0, 3);
            texto(2, 18, "Cuando te dirijas al github del creador", 0, 3);
            texto(2, 19, "te encontraras con una version", 0, 3);
            texto(2, 20, "actualizada y mejorada", 0, 3);

            texto(2, 23, "ESPERO TE HAYA GUSTADO =)", 0, 3);

        pintar(10);
        getch();

    }///FIN pantalla_creditos()

    ///PANTALLA_PUNTUACIONES()

        void pantalla_puntuaciones(jugador &J){
            int pos(0);

            oscurecer_pantalla();

        _lineax(0, 45, 0, '°', 7, 11);//borde superior
        _lineax(0, 45, 25, '°', 7, 11);//borde inferior
        _lineay(0, 25, 0, '°', 7, 11);//borde lateral izquierdo
        _lineay(45, 26, 0, '°', 7, 11);//borde lateral derecho

        texto(8, 3, "***Tabla de puntuaciones***", 0, 3);

        if(!cargar_puntajes())
            pos = -2;
        else
           pos = ordenar_jugadores(J);

        if(pos == -1 || pos == -2){
            switch(pos){
            case -1:
                while(!keydown(13)){
                    mostrar_tabla(-1);
                    texto(2, 17, "Tu puntacion no es suficiente para acceder a la tabla :(", 0, 3);
                    texto(2, 18, "Pulse enter para salir");
                    pintar(10);
                }
            break;

            case -2:
                 int i = 0;
                jugadores[0].puntuacion = J.puntuacion;
            mostrar_tabla(0);
            texto(2, 17, "Felicidades, no tienes contrincantes ;)", 0, 3);
            texto(2, 18, "Inserta tu nombre");
            pintar(10);
            while(i < 3){
                int letra = getch();
                if((letra >= 65 && letra <=90) || (letra >= 97 && letra <= 122)){
                    jugadores[0].nombre.at(i) = toupper((char)letra);
                    i++;
                    mostrar_tabla(0);
                    pintar(10);
                }
            }
             Sleep(1000);
                break;
            }
        }
        else{
            int i = 0;
            mostrar_tabla(pos);
            texto(2, 17, "Buen juego :D", 0, 3);
            texto(2, 18, "Inserta tu nombre");
            pintar(10);
            while(i < 3){
                int letra = getch();
                if((letra >= 65 && letra <=90) || (letra >= 97 && letra <= 122)){
                    jugadores[pos].nombre.at(i) = toupper((char) letra);
                    i++;
                    mostrar_tabla(pos);

                    pintar(10);
                }

                Sleep(1000);

            }

        }

        guardar_puntajes();

        }///FIN PANTALLA PUNTUACIONES

    ///FIN PANTALLA_PUNTUACIONES()









#endif // INTERFACES_H_INCLUDED
