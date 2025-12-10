#include <iostream>
using namespace std;

int main() {
    int galibiyet;
    int beraberlik;
    int maglubiyet;
    int puan;
    cout << "Lutfen takiminizin Galibiyet sayisini giriniz" << endl;
    cin >> galibiyet;
    cout << "Lutfen takiminizin Beraberlik sayisini giriniz" << endl;
    cin >> beraberlik;
    cout << "Lutfen takiminizin maglubiyet sayisini giriniz" << endl;
    cin >> maglubiyet;
    puan = (galibiyet * 3) + (beraberlik * 1) + (maglubiyet * 0);
        if (puan >= 85) {
            cout << "Tebrikler CL ye gitmeye hak kazandiniz" << endl;
        }
        else if (puan >= 70 && puan < 85) {
            cout << "Tebrikler EL ye gitmeye hak kazandiniz" << endl;

        }
        else
            cout << "daha fazla calismaniz gerekiyor" << endl;
        cout<<"puaniniz: "<<puan<< endl;

    return 0;
}