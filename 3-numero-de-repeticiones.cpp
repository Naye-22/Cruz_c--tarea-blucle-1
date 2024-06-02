#include<iostream>
using namespace std;
int main(){
    char va1;
    int numveces;
    cout<<"ingrese la letra o el simbolo que quiera mortar en pantalla: ";
    cin>>va1;
    cout<<"ingrese el numnero de veces que quiere que se muestre el mensaje: ";
    cin>>numveces;
    for(int i = 0; i < numveces; ++i){
        cout<<va1<<" ";
    }
    cout<<endl;
    return 0;
}