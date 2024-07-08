#include <iostream>
using namespace std;

struct persona
{
    char nombres[30];
    char DNI[8];
    int edad;
};

int main(){
    int n, cont50 = 0, suma = 0, prom;

    cout<<"REGISTRO"<<endl;
    cout<<"\tIngrese el numero de personas a registrar: "; cin>>n;

    persona registro[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\tPersona "<<i+1<<": "<<endl;
        cout<<"\t\tNombres: "; cin>>registro[i].nombres;
        cout<<"\t\tDNI: "; cin>>registro[i].DNI;
        cout<<"\t\tEdad: "; cin>>registro[i].edad;
    }

    for (int i = 0; i < n; i++)
    {
        if (registro[i].edad > 50)
        {
            cont50++;
        }
        suma = suma + registro[i].edad;
    }
    prom = suma / n;
    
    cout<<"\nDATOS PROCESADOS"<<endl;

    cout<<"\tPersonas mayores a 50 a\xA4os: "<<cont50<<endl;
    cout<<"\tPromedio de las edades: "<<prom<<" a\xA4os"<<endl;
    cout<<"\tLista de personas: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\t\tPersona "<<i+1<<": "<<endl;
        cout<<"\t\t\tNombres: "<<registro[i].nombres<<endl;
        cout<<"\t\t\tDNI: "<<registro[i].DNI<<endl;
        cout<<"\t\t\tEdad: "<<registro[i].edad<<endl;
    }
    
    return 0;
}