#ifndef JUGADORES_H
#define JUGADORES_H
#include <string>


class Jugadores
{
    public:
        bool operator <(const Jugadores& jug) const{
            return numero < jug.numero;
        }
        Jugadores(std::string n, int e, int num, std::string pos);
        virtual ~Jugadores();
        std::string getNombre() const;
        int getEdad() const;
        int getNumero() const;
        std::string getPosicion()const;

    protected:

    private:
        int numero, edad;
        std::string nombre, posicion;
};

#endif // JUGADORES_H
