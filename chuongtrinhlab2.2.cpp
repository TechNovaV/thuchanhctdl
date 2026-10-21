#include "thuvienlab2.2.h"

int main() {
    DanhSachMonHoc ds;
    nhapDanhSachMonHoc(ds);
    xuatDanhSachMonHoc(ds);

    char x[10], y[10]; int tc;
    cout << "\n Nhap ma mon muon tim: "; cin >> x;
    int k = timKiemTuanTu(ds, x);
    if (k == -1) cout << " Khong co ma mh trong DS";
    else { cout << " Co mon hoc ban can tim:\n"; xuatMonHoc(ds.danhSach[k]); }

    cout << "\n Cau 1 - Nhap ma mon X: "; cin >> x;
    cout << " So lan xuat hien: " << demMon(ds, x);

    cout << "\n Cau 2 - Nhap ma mon X: "; cin >> x;
    cout << " Nhap ma moi Y: "; cin >> y;
    thayMa(ds, x, y);
    xuatDanhSachMonHoc(ds);

    cout << "\n Cau 3 - Nhap so tin chi: "; cin >> tc;
    cout << "\n MaMH \t TenMH \t\t SoTC\n";
    timTheoTinChi(ds, tc);
}
