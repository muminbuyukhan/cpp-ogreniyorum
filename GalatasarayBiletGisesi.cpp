#include <iostream>
using namespace std;

int main() {
    int macloca;
        cout << "Lutfen mac locasi icin 1,2 veya 3 numarali katagoriyi seciniz "<< endl;
    cin >> macloca;
    switch (macloca) {
    case 1:
        cout << "Kale Arkasi sectiniz.Ucret : 400 TL.Tezahurat zamani!";
        break;
    case 2:
        cout << "Dogu Tribunu sectiniz. Ucret: 1500 TL. Maci iyi izleyin.";
        break;
    case 3:
        cout << "VIP Loca sectiniz. Ucret: 5000 TL. Keyfiniz bol olsun.";
        break;
    default:
            cout << "Hatali secim! Sadece 1, 2 veya 3 girebilirsiniz.";
        break;
    }

    return 0;
}