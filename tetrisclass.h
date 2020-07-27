#ifndef TETRISCLASS_H_INCLUDED
#define TETRISCLASS_H_INCLUDED
#include <vector>

class espacio{
        bool ocupado;
        int color;
        bool foco;
            public:
                espacio(): ocupado(false), color(0), foco(false){}
                bool getOcupado();//obtiene el estado ocupado/desocupado del cuadrado
                int getColor();//obtiene el color del cuadrado
                void setColor(const int &tinte);//cambia el color del recuadro
                void setOcupado(const bool &nuevo_estado);//cambia el estado de ocupado
                bool getFoco();//obtiene si el recuadro pertenece a un tetaminó activo
                void setFoco(const bool &nuevo_estado);
    };

    class jugador{
        public:
            std::string nombre;
            int puntuacion;
            jugador(): nombre("---"), puntuacion(0){}
            jugador(jugador &j): nombre(j.nombre), puntuacion(j.puntuacion){}
    };

    typedef std::vector<std::vector<std::vector<int> > > posicion;

    class tetramino{
        public:
        posicion posiciones;
        int color;
        int current_pos;
        int max_pos;
                tetramino(const int &tono, const int &tamano): current_pos(0), color(tono), max_pos(tamano){}
                 void rotar_L();
                 void rotar_R();
                 void mover();
                 bool validar_movimiento(const int &type);
                 void ocupar_cuadricula(const int &X, const int &Y, const int &tinte);
                 void desocupar_cuadricula(const int &X, const int &Y);
                 void eliminar_foco();
                 int getColor() const;
                 ~tetramino();
    };
        tetramino::~tetramino(){}

    class tetramino_O: public tetramino{
            public:
                tetramino_O(): tetramino(9, 1){
                    posiciones = {{
                                {0,0,0,0},
                                {0,1,1,0},
                                {0,1,1,0},
                                {0,0,0,0}}
                                };
                }
            };

    class tetramino_I: public tetramino{
            public:
                tetramino_I(): tetramino(10, 2){
                    posiciones = {
                                {
                                {0,0,1,0},
                                {0,0,1,0},
                                {0,0,1,0},
                                {0,0,1,0}
                                },
                                {
                                {0,0,0,0},
                                {1,1,1,1},
                                {0,0,0,0},
                                {0,0,0,0}
                                }
                                };
                }
    };

    class tetramino_L: public tetramino{
        public:
            tetramino_L(): tetramino(11, 4){
            posiciones = {
              {
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,1},
                {0,0,0,0}
              },
              {
                {0,1,1,1},
                {0,1,0,0},
                {0,0,0,0},
                {0,0,0,0}
              },
              {
                {0,1,1,0},
                {0,0,1,0},
                {0,0,1,0},
                {0,0,0,0}
              },
              {
                {0,0,1,0},
                {1,1,1,0},
                {0,0,0,0},
                {0,0,0,0}
              }
            };
        }
    };

    class tetramino_J: public tetramino{
        public:
            tetramino_J(): tetramino(12, 4){

            posiciones = {
                    {
                        {0,0,1,0},
                        {0,0,1,0},
                        {0,0,1,1},
                        {0,0,0,0}
                    },
                    {
                        {0,0,0,0},
                        {1,0,0,0},
                        {1,1,1,0},
                        {0,0,0,0}
                    },
                    {
                        {1,1,0,0},
                        {1,0,0,0},
                        {1,0,0,0},
                        {0,0,0,0}
                    },
                    {
                        {1,1,1,0},
                        {0,0,1,0},
                        {0,0,0,0},
                        {0,0,0,0}
                    }
            };
        }
    };

    class tetramino_Z: public tetramino{
        public:
            tetramino_Z(): tetramino(13, 2){

            posiciones = {
                {
                    {0,0,0,0},
                    {0,1,1,0},
                    {0,0,1,1},
                    {0,0,0,0}
                },
                {
                    {0,1,0,0},
                    {0,1,1,0},
                    {0,0,1,0},
                    {0,0,0,0}
                }
            };
        }
    };

    class tetramino_S: public tetramino{
        public:
            tetramino_S(): tetramino(14, 2){

            posiciones = {
                {
                    {0,0,0,0},
                    {0,0,1,1},
                    {0,1,1,0},
                    {0,0,0,0}
                },
                {
                    {0,0,1,0},
                    {0,1,1,0},
                    {0,1,0,0},
                    {0,0,0,0}
                }
            };
        }
    };

   class tetramino_T: public tetramino{
        public:
            tetramino_T(): tetramino(15, 4){
            posiciones = {
                {
                    {0,0,0,0},
                    {0,0,1,0},
                    {0,1,1,1},
                    {0,0,0,0}
                },
                {
                    {0,1,0,0},
                    {0,1,1,0},
                    {0,1,0,0},
                    {0,0,0,0}
                },
                {
                    {0,0,0,0},
                    {1,1,1,0},
                    {0,1,0,0},
                    {0,0,0,0}
                },
                {
                    {0,1,0,0},
                    {1,1,0,0},
                    {0,1,0,0},
                    {0,0,0,0}
                }
            };
        }
    };


#endif // TETRISCLASS_H_INCLUDED
