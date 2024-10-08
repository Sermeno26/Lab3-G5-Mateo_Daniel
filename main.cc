#include <iostream>

int PotenciaNumero(int exp, int numero)
{

    if (exp == 0)
    {
        return 1;
    }

    if (exp == 1)
    {
        return numero;
    }

    return numero * PotenciaNumero(exp - 1, numero);
};

int Numeronaturales(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return Numeronaturales(n - 1) + Numeronaturales(n - 2);
};

int main(int argc, char *argv[])
{
    int exp, numero,n1;
    std::cout << "ingrese el valor del numero" << '\n';
    std::cin >> numero;
    std::cout << "Ingrese el valor del exponente a que quiere elevar el numero" << '\n';
    std::cin >> exp;
    std::cout << "El valor final es:";
    std::cout << PotenciaNumero(exp, numero);
    std::cout << "Ingresa un numero: ";
    std::cin >> n1;
    std::cout << Numeronaturales(n1) << std::endl;

    return 0;
}
