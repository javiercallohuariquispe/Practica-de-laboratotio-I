#include <iostream>
using namespace std;

void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
{
    int respFech , respMes;

    if ( fechAct < fechNac  )
    {
        fechAct = fechAct + 30;
        mesAct = mesAct - 1;
        respFech =  fechAct - fechNac;
    }
    else
        respFech =  fechAct - fechNac;

    if( mesAct < mesNac )
    {
        mesAct = mesAct + 12;
        anioAct = anioAct - 1 ;
        respMes = mesAct - mesNac;
    }
    else
        respMes = mesAct - mesNac;

    cout << "\nTienes "<< anioAct - anioNac <<" años " <<respMes <<" meses y "<<respFech <<" dias." ;
}

int main ()
{
    int anioAct=2022;
    int mesAct;
    int fechAct;

    int anioNac;
    int mesNac;
    int fechNac;
    int a = 0;

    cout << "Programa que calcula la Edad, Mes y Dia";
    cout << "\nEscuela Profesional de Ingenieria de Sistemas\n\n";
    while (a == 0)
    {
        cout << "Ingrese Mes Actual: ";
        cin >> mesAct;
        cout << "Ingrese Fecha Actual: ";
        cin >> fechAct;

        cout << "\nIngrese Año Nacimiento: ";
        cin >> anioNac;
        cout << "Ingrese Mes de Nacimiento: ";
        cin >> mesNac;
        cout << "Ingrese Fecha de Nacimiento: ";
        cin >> fechNac;

        calcularEdad( anioAct , mesAct, fechAct, anioNac, mesNac, fechNac);
        cout << "\nPara finalizar el progrma ingrese 1\n";
        cout << "Para continuar ingrese 0:";
        cin >> a;
    }



    return 0;
}
