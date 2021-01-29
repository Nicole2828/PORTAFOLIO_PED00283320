#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Digite un numero: "<<endl; 
    cin>>n; 

    int suma = 0;
    while (n>0) {
        suma = suma + n%10;
        n = n/10;
    }

    cout<< "La suma es: "<<endl<<suma;

    return 0; 

}