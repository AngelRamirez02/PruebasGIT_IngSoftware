#include <iostream>
#include <string>

using namespace std;

void FuncionDaniella()
{
    cout << "\n\t:p \n";
}

void FuncionAngel()
{
    cout << "\n\tMensaje de Angel Ramirez Castro para GIT\nHola\n";
}

void FuncionKarla()
{
    cout<<"\n\t no\n";
}

void FuncionAline()
{
    cout << "\n\tMensaje \n";
}

void FuncionJuanPa()
{
    string nombre;
    cout << "Por favor, introduce tu nombre: ";
    cin >> nombre;
    cout << "Hola, " << nombre << "! Este es tu mensaje personalizado:\n";
}

int main()
{
    FuncionJuanPa();
    FuncionAngel();
    FuncionAline();    
    FuncionDaniella();
    FuncionKarla();
    return 0;
}
