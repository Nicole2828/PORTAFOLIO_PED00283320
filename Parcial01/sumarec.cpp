#include <iostream>
using namespace std; 

int sumadig(int n){
    if(n < 10){
        return n;   
    } else{
        return (n % 10)+ sumadig(n/10);
    }
}

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

}