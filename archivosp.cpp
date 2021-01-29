#include <iostream>
#include <fstream>
using namespace std; 

int main(){
    float a,b,c,suma,promedio;
    int i, k;
    cout<<"DIGITE UN NUMERO: ";
    cin>>a;
    cout<<"DIGITE UN NUMERO: ";
    cin>>b;
    cout<<"DIGITE UN NUMERO: ";
    cin>>c;
     
    suma=a+b+c;
    promedio=(a+b+c)/3;

    cout<<"LA SUMA ES: "<<suma;
    cout<<"EL PROMEDIO ES: "<<promedio;

cout << endl;
cout << "LEER EL ARCHIVO" << endl << endl;
ifstream archivo;
archivo.open("archivo.txt");

i = 0;
while(!archivo.eof( ))
cout << "EL ARCHIVO ES: " << endl;
cin>>archivo;
archivo.close( );

    return 0;
}

