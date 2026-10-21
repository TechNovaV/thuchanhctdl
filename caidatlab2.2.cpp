#include "thuvienlab2.2.h"

void nhapMonHoc(MonHoc &mh) {
    cout << "\n Nhap ma MH: "; cin >> mh.maMon;
    cout << " Nhap ten MH: "; cin.ignore(); cin.getline(mh.tenMon, 30);
    cout << " Nhap so tin chi: "; cin >> mh.soTinChi;
}
void xuatMonHoc(MonHoc mh) {
    cout << mh.maMon << "\t" << mh.tenMon << "\t\t" << mh.soTinChi << endl;
}
void nhapDanhSachMonHoc(DanhSachMonHoc &ds) {
    cout << "Nhap so luong mon hoc: "; cin >> ds.soMon;
    for (int i = 0; i < ds.soMon; i++) nhapMonHoc(ds.danhSach[i]);
}
void xuatDanhSachMonHoc(DanhSachMonHoc ds) {
    cout << "\n MaMH \t TenMH \t\t SoTC\n";
    for (int i = 0; i < ds.soMon; i++) xuatMonHoc(ds.danhSach[i]);
}
int timKiemTuanTu(DanhSachMonHoc ds, char *ma) {
    int i = 0;
    while (i < ds.soMon && strcmp(ds.danhSach[i].maMon, ma) != 0) i++;
    return (i == ds.soMon) ? -1 : i;
}
// Cau 1: dem so lan xuat hien mon X
int demMon(DanhSachMonHoc ds, char *x) {
    int dem = 0;
    for (int i = 0; i < ds.soMon; i++)
        if (strcmp(ds.danhSach[i].maMon, x) == 0) dem++;
    return dem;
}
// Cau 2: tim vi tri mon X (-1 neu khong co)
int timViTri(DanhSachMonHoc ds, char *x) {
    for (int i = 0; i < ds.soMon; i++)
        if (strcmp(ds.danhSach[i].maMon, x) == 0) return i;
    return -1;
}
// Cau 2: doi ma X thanh ma Y
void thayMa(DanhSachMonHoc &ds, char *x, char *y) {
    int k = timViTri(ds, x);
    if (k == -1) cout << "\n Khong co mon " << x;
    else { strcpy(ds.danhSach[k].maMon, y); cout << "\n Da thay o vi tri " << k; }
}
// Cau 3: tim tat ca mon co so tin chi = tc
void timTheoTinChi(DanhSachMonHoc ds, int tc) {
    bool co = false;
    for (int i = 0; i < ds.soMon; i++)
        if (ds.danhSach[i].soTinChi == tc) { xuatMonHoc(ds.danhSach[i]); co = true; }
    if (!co) cout << "\n Khong co mon nao";
}
