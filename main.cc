#include <iostream>

int PotenciaNumero(int exp, int numero){
    

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

int main(int argc, char *argv[])
{
    int exp, numero;
    std::cout<<"ingrese el valor del numero"<<'\n';
    std::cin>>numero;
    std::cout<<"Ingrese el valor del exponente a que quiere elevar el numero"<<'\n';
    std::cin>>exp;
    std::cout<<"El valor final es:";
    std::cout<<PotenciaNumero(exp, numero);

    return 0;
}




