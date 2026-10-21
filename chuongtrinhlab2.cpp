#include"thuvienlab21.h"
void main() {
	DaySo day;
	int a, k;
	khoiTao(day);
	docDanhSach(day);
	xuatDanhSach(day);
	cout << "\n Nhap phan tu k can tim:";
	cin >> k;
	if (timkimtuantu(day, k) == -1)
		cout << "\n k";
	else
		cout << "\n thay";
}