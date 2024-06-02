#include<iostream>
using namespace std;
 int main(){
    //1) Imprima los números múltiplos de 5 comprendidos entre 1 y al 100
    for (int i = 1; i <= 100; ++i) {
         if (i % 5 == 0) {
            cout << i << " ";
         }
 }
 return 0;
}