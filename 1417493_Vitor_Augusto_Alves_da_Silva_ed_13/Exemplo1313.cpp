/*
 Exemplo1313 - v1.3. - 03 / 12 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include <iostream>
#include <string>

using namespace std;

class Objeto
{
    public:

    string nome;
    void iniNome(string nm);
    string fone;
    void iniFone(string fn);
    void testarFone(string fn);

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

void Objeto::testarFone (string fn)
{
    int i = 0;
    bool resultado;

    int len = fn.size();

    for (i = 0; i < len;i++)
    {
        if (!(fn[i] >= '1' && fn[i]<= '9' || fn[i] == '-'))
        {
            resultado = false;
            i = len;
        }
        else
        resultado = true;
    }

    if (resultado == false)
    cout << "Telefone invalido" << endl;
    else
    cout << "Telefone valido" << endl;

}

int main ()
{
    void method11();
    void method12();
    void method13();

    int x;

    do
    {
        cout << "(11) - Atribuir valor do teclado a objeto nome" << endl;
        cout << "(12) - Atribuir valor do teclado a objeto telefone" << endl;
        cout << "(13) - Testar se o valor de um telefone eh valido" << endl;
        
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

            case 13:
            method13();
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
    cout << obj1->nome << endl;
}

void method13()
{
    Objeto *obj1 = new Objeto();

    string fone;

    cout << "Insira um telefone para testar" << endl;
    cin >> fone;

    obj1->testarFone(fone);

}