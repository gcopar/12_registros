#include <iostream>
using namespace std;
struct personas
{
    char nombre[30];
    int dnac;
    int mnac;
    int anio;
};

int main(){
    int n, control = 1, mes, control2 = 1;

    cout<<"Ingresa el numero de personas a registrar: "; cin>>n;
    personas registro[n];

    cout<<"REGISTRO DE PERSONAS: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\tPersona "<<i+1<<endl;
        cout<<"\t\tNombre: "; cin>>registro[i].nombre;
        cout<<"\t\tDia de nacimiento: "; cin>>registro[i].dnac;
        cout<<"\t\tMes de nacimiento: "; cin>>registro[i].mnac;
        cout<<"\t\tA\xA4o de nacimiento: "; cin>>registro[i].anio;
    }
    
    cout<<"DATOS PROCESADOS: "<<endl;
    while (control == 1)
    {
        cout<<"\tIngrese un mes en numeros (enero = 1): "; cin>>mes;
        if (mes != 0)
        {
            cout<<"\tPersonas que cumplen ese mes: "<<endl;
            for (int i = 0; i < n; i++)
            {
                if (registro[i].mnac == mes)
                {
                    cout<<"\t\t"<<registro[i].nombre<<endl;
                    cout<<"\t\t\t"<<registro[i].nombre<<endl;
                }else{
                    control2 = 0;
                }
            }

            if (control2 == 0)
            {
                cout<<"Ninguno"<<endl;
            }
            
        } else{
            control = 0;
            cout<<"\tSe cerrara el programa"<<endl;
        }
    }
    
    return 0;
}