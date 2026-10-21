#include"thuvienlab2.2.h"

void nhapMonHoc(MonHoc& mh) {
	cout << "\n Nhap ma mh:";
	cin >> mh.maMon;
	cout << "\n Nhap Ten MH:";
	cin.ignore();
	cin.getline(mh.tenMon, 30);
	cout << "\n Nhap so tin chi:";
	cin >> mh.soTinChi;
}

void nhapDanhSachMonHoc(DanhSachMonHoc& ds) {
	cout << "\n Nhap so luong mon hoc:";
	cin >> ds.soMon;
	cout << "\n Nhap thong tin tung mon hoc:";
	for (int i = 0; i < ds.soMon; i++) {
		cout << "\n Thong tin Mon Hoc Thu:" << i + 1 << endl;
		nhapMonHoc(ds.danhSach[i]);
	}
}
void xuatDanhSachMonHoc(DanhSachMonHoc ds) {
	cout << "\n Danh sach cac mon hoc:" << endl;
	cout << "\n MaMH \t TenMH \t so tc" << endl;
	for (int i = 0; i < ds.soMon; i++)
		xuatMonHoc(ds.danhSach[i]);
}

int timkimtuantu(DanhSachMonHoc ds, char* maCanTim) {
	int i = 0;
	while (i < day.n && day.ds[i] != x)
		i++;
	if (i == day.n)
		return -1;
	return i;
}