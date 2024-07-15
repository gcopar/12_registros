#include <iostream>
using namespace std;

struct atletas
{
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

int main(){
    int n;

    cout<<"REGISTRO DE ATLETAS OLIMPICOS"<<endl;
    cout<<"Ingrese el numero de atletas olimpicos: "; cin>>n;
    atletas registros[n];
    cin.ignore();
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Nombres: "; getline(cin, registros[i].nombre);
        cout<<"Pais: "; getline(cin, registros[i].pais);
        cout<<"Disciplina: "; getline(cin, registros[i].disciplina);
        cout<<"Numero de medallas: "; cin>>registros[i].medallas;
        cin.ignore();
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<registros[i].nombre<<endl;
        cout<<registros[i].pais<<endl;
        cout<<registros[i].disciplina<<endl;
        cout<<registros[i].medallas<<endl;
    }
    
    return 0;
}