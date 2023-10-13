/*
 Exemplo1318 - v1.8. - 03 / 12 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Objeto
{
    public:

    string nome;
    void iniNome(string nm);
    string fone;
    void iniFone(string fn);
    void testarFone(string fn);
    string fone2;
    void iniFone2(string fn1,string fn2);
    void testarFone2(string fn1, string fn2);
    void iniFoneApenas2(string fn2);

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

void Objeto::iniFone2(string fn1,string fn2)
{
    this->fone  = fn1;
    this->fone2 = fn2;
}

void Objeto::testarFone2(string fn1, string fn2)
{
    int i = 0;
    int resultado1 = 0;
    int resultado2 = 0;

    int len  = fn1.size();
    int len2 = fn2.size();

    for (i = 0; i < len;i++)
    {
        if (!(fn1[i] >= '1' && fn1[i]<= '9' || fn1[i] == '-'))
        {
            resultado1 = 0;
            i = len;
        }
        else
        resultado1 = 1;
    }

    for (i = 0; i < len2;i++)
    {
        if (!(fn2[i] >= '1' && fn2[i]<= '9' || fn2[i] == '-'))
        {
            resultado2 = 0;
            i = len;
        }
        else
        resultado2 = 1;
    }

    cout <<  "Quantidade de telefones = " << resultado1 + resultado2 << endl;

}

void Objeto::iniFoneApenas2(string fn2)
{
    this-> fone2 = fn2;    
}

int main ()
{
    void method11();
    void method12();
    void method13();
    void method14();
    void method15();
    void method16();
    void method17();
    void method18();

    int x;

    do
    {
        cout << "(11) - Atribuir valor do teclado a objeto nome" << endl;
        cout << "(12) - Atribuir valor do teclado a objeto telefone" << endl;
        cout << "(13) - Testar se o valor de um telefone eh valido" << endl;
        cout << "(14) - Ler dados de arquivo e armazenar em um objeto dessa classe" << endl;
        cout << "(15) - Gravar dados de uma pessoa em arquivo" << endl;
        cout << "(16) - Segundo telefone" << endl;
        cout << "(17) - Indicar quantos telefones estao associados a cada objeto" << endl;
        cout << "(18) - Atribuir valor ao segundo telefone" << endl;
        
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

            case 14:
            method14();
            break;

            case 15:
            method15();
            break;

            case 16:
            method16();
            break;

            case 17:
            method17();
            break;

            case 18:
            method18();
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

void method14()
{
    Objeto *obj1 = new Objeto();

    string nome;

    ifstream file;
    file.open ("METHOD14.txt");

    file >> nome;
    cout << nome << endl;

    obj1 -> iniNome(nome);

    file.close();

}

void method15()
{
    Objeto *obj1 = new Objeto();

    string nome = "Fabio";
    string fone = "1515-3636";

    obj1 -> iniNome (nome);
    obj1 -> iniFone (fone);

    ofstream file;
    file.open ("METHOD15.txt");

    file << obj1->nome << endl;
    file << obj1->fone << endl;

    file.close();

}

void method16()
{
    Objeto *obj1 = new Objeto();

    string fn1 = "123456789";
    string fn2 = "987654321";

    obj1->iniFone2(fn1, fn2);

    cout << obj1->fone << endl;
    cout << obj1->fone2 << endl;

}

void method17()
{
    Objeto *obj1 = new Objeto();

    string fn1 = "123456789";
    string fn2 = "987654321";

    obj1->iniFone2(fn1, fn2);

    obj1->testarFone2(fn1, fn2);
}

void method18()
{
    Objeto *obj1 =  new Objeto();

    string fn2 = "987654321";

    obj1->iniFoneApenas2(fn2);

    cout << obj1->fone2 << endl;

}