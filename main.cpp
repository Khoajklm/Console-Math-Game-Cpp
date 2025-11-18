#include <iostream>
#include "Bieuthuc.h"
#include <vector>
using namespace std;

int main() {
	cout << "========CHOI GIAI TOAN========" << endl;
	cout << "co 5 cap do, tra loi dung +1 diem" << endl;
	cout << "tra loi sai thi dung" << endl;
	int flag = 1;
	int dapan;
	int diem = 0;
	for (int lap = 1; lap <= 5; lap++) {
		cout << "===============================" << endl;
		Bieuthuc cauhoi(lap);
		cout << "cau hoi so " << lap << " - cap do - " << lap<< " - " << "     " << cauhoi << " = ?" << endl;
		cout << "cau tra loi la: ";
		cin >> dapan;
		if (cauhoi.kiemtra(dapan)) {
			diem += 1;
			cout << "cau tra loi chinh xac! so diem hien tai la: " << diem << endl;
		}
		else {
			cout << "cau tra loi sai! tong ket, diem cua ban la: " << diem << endl;
			return 0;
		}
	}
}