#include <iostream>
using namespace std;

struct empleado
{
    char nombre[30];
    char sexo;
    float sueldo;
};


int main(){
    int n, menor, mayor = 0, nmenor, nmayor;
    cout<<"Ingrese el numero de empleados que tiene la empresa: "; cin>>n;
    empleado Registros[n];

    cout<<"\nREGISTRO DE DATOS:"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<"\tEMPLEADO "<<i+1<<endl;
        cout<<"\t\tNombre: "; cin>>Registros[i].nombre;
        cout<<"\t\tSexo: "; cin>>Registros[i].sexo;
        cout<<"\t\tSueldo: "; cin>>Registros[i].sueldo;
    }
    
    menor = Registros[0].sueldo;
    
    for (int i = 0; i < n; i++)
    {
        if (Registros[i].sueldo >= mayor)
        {
            mayor = Registros[i].sueldo;
            nmayor = i;
        }

        if (Registros[i].sueldo <= menor)
        {
            menor = Registros[i].sueldo;
            nmenor = i;
        }
    }
    
    cout<<"\nDATOS PROCESADOS: "<<endl;
    cout<<"\tEmpleado con mayor sueldo: "<<Registros[nmayor].nombre<<" con $. "<<Registros[nmayor].sueldo<<endl;
    cout<<"\tEmpleado con menor sueldo: "<<Registros[nmenor].nombre<<" con $. "<<Registros[nmenor].sueldo<<endl;

    return 0;
}