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
    int n, mayor = 0, ordenmayor = 0, control = 1;
    string npais;

    cout<<"REGISTRO DE ATLETAS OLIMPICOS"<<endl;
    cout<<"Ingrese el numero de atletas olimpicos: "; cin>>n;
    atletas registros[n];
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout<<"\nAtleta Nº "<<i+1<<endl;
        cout<<"Nombres: "; getline(cin, registros[i].nombre);
        cout<<"Pais: "; getline(cin, registros[i].pais);
        cout<<"Disciplina: "; getline(cin, registros[i].disciplina);
        cout<<"Numero de medallas: "; cin>>registros[i].medallas;
        cin.ignore();
    }
    
    cout<<"\nIngresa el nombre de un pais: "; getline(cin, npais);
    cout<<"\nAtletas de "<<npais<<": "<<endl;

    for (int i = 0; i < n; i++)
    {
        if (npais == registros[i].pais)
        {
            cout<<"\t- "<<registros[i].nombre<<endl;
            if (mayor < registros[i].medallas)
            {
                mayor = registros[i].medallas;
                ordenmayor = i;
            }
        }else{
            control = 0;
        }
    }
    
    if (control == 1)
    {
        cout<<"\nAtleta con la mayor cantidad de medallas de "<<npais<<" es: "<<endl;
        cout<<registros[ordenmayor].nombre<<" con "<<mayor<<" medallas"<<endl;
    }else{
        cout<<"No hay un atleta registrado de ese pais"<<endl;
    }    
    return 0;
}