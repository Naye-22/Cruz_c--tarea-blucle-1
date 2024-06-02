#include<iostream>
using namespace std;

int main (){
    int num;
    cout<<"ingresa la tabla de multiplicar que deseas mostrar en pantalla: ";
    cin>> num;
    for(int i = 1; i <=12; ++i){
        cout << num << " x " << i << " = " << num * i <<endl;
    }

}