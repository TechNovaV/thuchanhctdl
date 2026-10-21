#include "thuvienlab21.h"

void khoiTao(DaySo& day) {
	day.n = 0;
}

bool kiemTraRong(DaySo day) {
	return (day.n == 0 ? 1 : 0);
}

bool kiemTraDay(DaySo day) {
	return (day.n == Max ? 1 : 0);
}

int laySoPhanTu(DaySo day) {
	return day.n;
}

void docDanhSach(DaySo& day) {
	cout << "\n Nhap vao so phan tu cua DS:";
	cin >> day.n;
	for (int i = 0; i < day.n; i++) {
		cout << "\n Nhap vao phan tu thu " << i + 1 << ":";
		cin >> day.ds[i];
	}
}

void xuatDanhSach(DaySo day) {
	cout << "\n Phan tu trong DS:";
	for (int i = 0; i < day.n; i++)
		cout << day.ds[i] << " ";
}

int timkimtuantu(DaySo day, int x) {
	int i = 0;
	while (i < day.n && day.ds[i] != x)
		i++;
	if (i == day.n)
		return -1;
	return i;
}

int timKiemmhiphan(DaySo day, int a) {
	int bottom = 0, top = day.n - 1; int mid;
		do {
			mid = (bottom + top) / 2;
			if (a == day.ds[mid]) return mid;
			else
				if (a < day.ds[mid]) top = mid - 1;
				else bottom = mid + 1;
		} while (bottom <= top);
		return -1;
	}