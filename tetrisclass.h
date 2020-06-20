#ifndef TETRISCLASS_H_INCLUDED
#define TETRISCLASS_H_INCLUDED

class espacio{
        bool ocupado;
        int color;
            public:
                bool getOcupado();//obtiene el estado ocupado/desocupado del cuadrado
                int getColor();//obtiene el color del cuadrado
                void setColor(const int &color);//cambia el color del recuadro
                void setOcupado(const bool &nuevo_estado);//cambia el estado de ocupado

    };


#endif // TETRISCLASS_H_INCLUDED
