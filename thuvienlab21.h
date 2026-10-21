#include<iostream>
using namespace std;
const int Max = 50;

struct DaySo {
	int ds[Max];
	int n;
};
void khoiTao(DaySo& day);
bool kiemTraRong(DaySo day);
bool kiemTraDay(DaySo day);
int laySoPhanTu(DaySo day);
void docDanhSach(DaySo& day);
void xuatDanhSach(DaySo day);
int timkimtuantu(DaySo day, int x);