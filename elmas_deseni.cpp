#include <iostream>
using namespace std;

int main() {
   
    int boslukSayisi = 4; 
    int yildizSayisi = 1;

    
    for (int i = 1; i <= 3; i++) {

       
        for (int k = 1; k <= boslukSayisi; k++) {

            cout << " ";
        }

       
        for (int j = 1; j <= yildizSayisi; j++) {

            cout << "*";
        }

        cout << endl; 

        boslukSayisi--;      
        yildizSayisi += 2;  
    }
  
    boslukSayisi = 3; 
    yildizSayisi = 3; 
    
    for (int l =1 ; l <= 2; l++) {


        for (int a = 1; a <= boslukSayisi; a++) {

            cout << " ";
        }
        for (int b = 1; b <= yildizSayisi; b++){

                cout << "*";
        }

        cout << endl;


        boslukSayisi++;
        yildizSayisi -= 2;
    }
    
    return 0;
}