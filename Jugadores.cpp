#include "Jugadores.h"
#include <string>

Jugadores::Jugadores(std::string n, int e, int num, std::string pos)
{
 nombre = n;
 edad = e;
 numero = num;
 posicion = pos;
 nombre=n;
}
std::string Jugadores::getNombre() const
{
    return nombre;
}
int Jugadores::getEdad() const
{
    return edad;
}
int Jugadores::getNumero() const
{
    return numero;
}
std::string Jugadores::getPosicion() const
{
    return posicion;
}
Jugadores::~Jugadores()
{
    //dtor
}
