#pragma once
#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 50;
struct MonHoc { char maMon[10]; char tenMon[30]; int soTinChi; };
struct DanhSachMonHoc { int soMon; MonHoc danhSach[MAX]; };

void nhapMonHoc(MonHoc &mh);
void xuatMonHoc(MonHoc mh);
void nhapDanhSachMonHoc(DanhSachMonHoc &ds);
void xuatDanhSachMonHoc(DanhSachMonHoc ds);
int timKiemTuanTu(DanhSachMonHoc ds, char *ma);
int demMon(DanhSachMonHoc ds, char *x);
int timViTri(DanhSachMonHoc ds, char *x);
void thayMa(DanhSachMonHoc &ds, char *x, char *y);
void timTheoTinChi(DanhSachMonHoc ds, int tc);
