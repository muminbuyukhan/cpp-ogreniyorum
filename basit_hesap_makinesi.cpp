#include <iostream>
using namespace std;
int main() {
	cout << "Hesap makinesi" << endl;
	int a, b;
	int islem;

	cout << "1. ISLEM: TOPLAMA" << endl;
	cout << "2. ISLEM: CIKARMA" << endl;
	cout << "3. ISLEM  CARPMA " << endl;
	cout << "4. ISLEM  BOLME" << endl;

	cout << "yapmak istediginiz sayiyi seciniz 1-4 arasi:";
	cin >> islem;


	if (islem == 1) {

		cout << "birinci sayiyi giriniz: ";
		cin >> a;
		cout << "ikinci sayiyi giriniz: ";
		cin >> b;
		islem = a + b;
		cout << "islem sonucu:" << islem << endl;
	}
	else if(islem == 2) {

		cout << "birinci sayiyi giriniz: ";
		cin >> a;
		cout << "ikinci sayiyi giriniz: ";
		cin >> b;
		islem = a - b;
		cout << "islem sonucu:" << islem << endl;
	}
	else if(islem == 3) {

		cout << "birinci sayiyi giriniz: ";
		cin >> a;
		cout << "ikinci sayiyi giriniz: ";
		cin >> b;
		islem = a * b;
		cout << "islem sonucu:" << islem << endl;
	}
	else if(islem == 4) {

		cout << "birinci sayiyi giriniz: ";
		cin >> a;
		cout << "ikinci sayiyi giriniz: ";
		cin >> b;
		islem = a / b;
		cout << "islem sonucu:" << islem << endl;
	}
	else {
		cout << "Hatalý islem";
	}
	system("pause");
	return 0;
}