/*
 Exemplo1312 - v1.2. - 03 / 12 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include <iostream>

using namespace std;

class Objeto
{
    public:

    string nome;
    void iniNome(string nm);
    string fone;
    void iniFone(string fn);

    private:

};

void Objeto::iniNome (string nm)
{
    this->nome = nm;
}

void Objeto::iniFone (string fn)
{
    this->fone = fn;
}

int main ()
{
    void method11();
    void method12();

    int x;

    do
    {
        cout << "(11) - Atribuir valor do teclado a objeto nome" << endl;
        cout << "(12) - Atribuir valor do teclado a objeto telefone" << endl;
        
        cout << endl << "Escolha um metodo" << endl;

        cin >> x;

        switch (x)
        {
            case 11:
            method11();
            break;

            case 12:
            method12();
            break;

        }

    } while (x != 0);
    
    system ("pause");
    return 0;
}

void method11()
{
    Objeto *obj1 = new Objeto();

    string nome;

    cout << "Insira um nome para o objeto" << endl;
    cin >> nome;

    obj1->iniNome(nome);

    cout << obj1->nome << endl;
}

void method12()
{
    Objeto *obj1 = new Objeto();

    string fone;
    string nome;

    cout << "Insira um telefone para o objeto" << endl;
    cin >> fone;

    obj1->iniFone(fone);

    cout << obj1->fone << endl;
}