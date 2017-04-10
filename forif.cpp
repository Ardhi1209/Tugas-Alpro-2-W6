#include <iostream>
using namespace std;

int main () {
	char elm [10];
	int i, jmh=0 ;
	
		for (int i=0; i< 10; i++) {
			cout << "Masukkan Character : ";
			cin >> elm[i];
	
			if (elm[i] == 'a' || elm[i] == 'A'){
			jmh++;
			}
		}
		
		cout << "Hasil Elemen : ";
		for (int i=0; i< 10; i++) {
			cout << elm [i];
			}
		cout << endl << "Jumlah Elemen a : " << jmh;
}