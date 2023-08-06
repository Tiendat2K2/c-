#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
string IBOOK[1000][9];
int slm = 0;

void nhap() {
	
	int a;
	cout << "nhap so luong" << endl;
	cin >> a;
	for (size_t i = 0; i < a; i++)
	{
		string hoten;
		string gioitinh;
		string tensach;
		string theloai;
		string tacgia;
		string giatien;
		string thoigian;
		string giaodich;

		cout << "Nhap maseri:" << endl;
		cin >> IBOOK[slm][0];

		cout << " ho va ten:" << endl;
		fflush(stdin);
		getline(cin, hoten);
		IBOOK[slm][1] = hoten;

		cout << "Gioi tinh" << endl;
		fflush(stdin);
		getline(cin, gioitinh);
		IBOOK[slm][2] = gioitinh;

		cout << "Ten sach:" << endl;
		fflush(stdin);
		getline(cin, tensach);
		IBOOK[slm][3] = tensach;

		cout << "The loai" << endl;
		fflush(stdin);
		getline(cin, theloai);
		IBOOK[slm][4] = theloai;

		cout << "Tac gia:" << endl;
		fflush(stdin);
		getline(cin, tacgia);
		IBOOK[slm][5] = tacgia;

		cout << "Gia tien" << endl;
		fflush(stdin);
		getline(cin, giatien);
		IBOOK[slm][6] = giatien;

		cout << "Thoi gian:" << endl;
		fflush(stdin);
		getline(cin, thoigian);
		IBOOK[slm][7] = thoigian;

		cout << "Giao dich" << endl;
		fflush(stdin);
		getline(cin, giaodich);
		IBOOK[slm][8] = giaodich;

		slm++;
	}
	
}
void xuat() {
	if (slm == 0)
	{
		cout << setw(15) << "+----------------------------------------------------------------------------------------------------------------------------------------------------------+" << endl;
		cout << "|                                                             Quan ly IBOOK                                                                                |" << endl;
		cout << "+----------------------------------------------------------------------------------------------------------------------------------------------------------+" << endl;
		cout << "|                                                            Ngay 17/03/2022                                                                               |" << endl;
		cout << "+---------+-------------------------------+----+--------------------+------------------+-------------+----------------+-------------------+----------------+" << endl;
		cout << "| Maseri  |        Name                   | GT |      book          |     Category     |   Author    |        price   |           time    |    transaction |" << endl;
		cout << "+---------+-------------------------------+----+--------------------+------------------+-------------+----------------+-------------------+----------------+" << endl;
		cout << "|                                                            Danh sach rong                                                                                |" << endl;
		cout << "+-----------------------------------------------------------------------------------------------------------------------------------------+----------------+" << endl;
	}
	else
	{
		cout << "+----------------------------------------------------------------------------------------------------------------------------------------------------------+" << endl;
		cout << "|                                                             Quan ly IBOOK                                                                                |" << endl;
		cout << "+----------------------------------------------------------------------------------------------------------------------------------------------------------+" << endl;
		cout << "|                                                            Ngay 17/03/2022                                                                               |" << endl;
		cout << "+---------+-------------------------------+----+--------------------+------------------+-------------+----------------+-------------------+----------------+" << endl;
		cout << "| Maseri  |        Name                   | GT |      book          |     Category     |   Author    |        price   |           time    |    transaction |" << endl;
		cout << "+---------+-------------------------------+----+--------------------+------------------+-------------+----------------+-------------------+----------------+" << endl;
		for (size_t i = 0; i < slm; i++)
		{
			for (size_t j = 0; j < 9; j++)
			{
				cout << IBOOK[i][j] << setw(18);

			}cout << "\n";
			cout << "+---------+-------------------------------+----+--------------------+------------------+-------------+----------------+-------------------+----------------+" << endl;
		}cout << "\n";
	}
}
int timkiem(string ma) {
	for (size_t i = 0; i < slm; i++)
	{
		if (IBOOK[i][0] == ma)
		{
			cout << "Tim kiem..." << endl;
			cout << "+----------------------------------------------------------------------------------------------------------------------------------------------------------+" << endl;
			cout << "|                                                             Quan ly IBOOK                                                                                |" << endl;
			cout << "+----------------------------------------------------------------------------------------------------------------------------------------------------------+" << endl;
			cout << "|                                                            Ngay 17/03/2022                                                                                |" << endl;
			cout << "+---------+-------------------------------+----+--------------------+------------------+-------------+----------------+-------------------+----------------+" << endl;
			cout << "+ Maseri  |        Name                   | GT |      book          |     Category     |   Author    |        price   |           time    |    transaction |" << endl;
			cout << "+---------+-------------------------------+----+--------------------+------------------+-------------+----------------+-------------------+----------------+" << endl;
			for (size_t j = 0; j < 9; j++)
			{
				cout << IBOOK[i][j] << setw(18);
			}cout << "\n";
			cout << "+---------+-------------------------------+----+--------------------+------------------+-------------+----------------+-------------------+----------------+" << endl;

			return 1;
		}
	}cout << "Tim kiem..." << endl;
	cout << "+----------------------------------------------------------------------------------------------------------------------------------------------------------+" << endl;
	cout << "|                                                             Quan ly IBOOK                                                                                |" << endl;
	cout << "+----------------------------------------------------------------------------------------------------------------------------------------------------------+" << endl;
	cout << "|                                                            Ngay 17/03/2022                                                                                |" << endl;
	cout << "+---------+-------------------------------+----+--------------------+------------------+-------------+----------------+-------------------+----------------+" << endl;
	cout << "| Maseri  |        Name                   | GT |      book          |     Category     |   Author    |        price   |           time    |    transaction |" << endl;
	cout << "+---------+-------------------------------+----+--------------------+------------------+-------------+----------------+-------------------+----------------+" << endl;
	cout << "|                                                   Khong tim thay thong tin nguoi mua                                                                     |" << endl;
	cout << "+----------------------------------------------------------------------------------------------------------------------------------------------------------+" << endl;
	return 0;
}
void xoa(string xoa1) {
	if (IBOOK[0][0] != xoa1) {
		cout << "Khong tim thay thong tin nguoi mua can xoa !" << endl;
	}
	for (size_t i = 0; i < slm; i++)
	{
		if (IBOOK[i][0] == xoa1)
		{
			cout << "Da xoa thanh cong" << endl;
			for (size_t j = 0; j < 9; j++)
			{
				IBOOK[i][j] = IBOOK[i + 1][j];
			}slm--;
		}
	}
}
void xapxep() {
	cout << "Sap xep tang dan theo maseri" << endl;
	for (size_t i = 0; i < slm - 1; i++)
	{
		for (size_t j = slm - 1; j > i; j--)
		{
			if (IBOOK[j][0] < IBOOK[j - 1][0])
			{
				swap(IBOOK[j][0], IBOOK[j - 1][0]);
				swap(IBOOK[j][1], IBOOK[j - 1][1]);
				swap(IBOOK[j][2], IBOOK[j - 1][2]);
				swap(IBOOK[j][3], IBOOK[j - 1][3]);
				swap(IBOOK[j][4], IBOOK[j - 1][4]);
				swap(IBOOK[j][5], IBOOK[j - 1][5]);
				swap(IBOOK[j][6], IBOOK[j - 1][6]);
				swap(IBOOK[j][7], IBOOK[j - 1][7]);
				swap(IBOOK[j][8], IBOOK[j - 1][8]);
			}
		}
	}
}
void menucapnhat() {
	cout << "  +------------------------------------------+" << endl;
	cout << "  |" << "       Cap nhat thong tin nguoi mua" << "       |" << endl;
	cout << "  |" << "    0 Sua maseri" << "                          |" << endl;
	cout << "  |" << "    1 Sua ho va ten" << "                       |" << endl;
	cout << "  |" << "    2 Sua Gioi tinh" << "                       |" << endl;
	cout << "  |" << "    3 Sua ten sach" << "                        |" << endl;
	cout << "  |" << "    4 Sua the loai" << "                        |" << endl;
	cout << "  |" << "    5 Sua tac gia" << "                         |" << endl;
	cout << "  |" << "    6 Sua gia tien" << "                        |" << endl;
	cout << "  |" << "    7 Sua Thoi gian" << "                       |" << endl;
	cout << "  |" << "    8 Sua Giao dich" << "                       |" << endl;
	cout << "  +------------------------------------------+" << endl;
}
void menu() {
	cout << setw(57) << "+--------------------------------------------+" << endl;
	cout << setw(12) << "|" << setw(30) << "Quan ly IBOOK" << setw(15) << "|" << endl;
	cout << setw(12) << "|" << "1 Them nguoi mua " << setw(28) << "|" << endl;
	cout << setw(12) << "|" << "2 In danh sach" << setw(31) << "|" << endl;
	cout << setw(12) << "|" << "3 Tim kiem" << setw(35) << "|" << endl;
	cout << setw(12) << "|" << "4 Xoa thong tin nguoi mua qua maseri" << setw(9) << "|" << endl;
	cout << setw(12) << "|" << "5 Sap xep thong tin nguoi mua qua masei" << setw(6) << "|" << endl;
	cout << setw(12) << "|" << "6 Cap nhat thong tin nguoi mua" << setw(15) << "|" << endl;
	cout << setw(12) << "|" << "0 Thoat chuong trinh" << setw(25) << "|" << endl;
	cout << setw(57) << "+--------------------------------------------+" << endl;
}
void capnhat(string id) {

	if (IBOOK[0][0] != id)
	{
		cout << "khong tim thay maseri can sua" << endl;
	}
	else {


		int n;
		char sua[450];
		cout << "NHap vi tri can sua" << endl;
		cin >> n;
		cout << "Nhap lai gia tri" << endl;
		cin >> sua;
		if (n < 0 || n>9)
		{
			cout << "Gia tri khong ton tai" << endl;
		}
		else
		{
			IBOOK[0][n] = sua;
		}
	}
}

int main()
{
	menu();
	int dulieu;
	cout << "Vui long chon(0-6):" << endl;
	cin >> dulieu;
	switch (dulieu)
	{
	case 1: {
		nhap();
		main();
		break;
	}case 2: {
		xuat();
		main();
		break;
	}
	case 3: {
		string ma;
		cout << "Nhap maseri:" << endl;
		cin >> ma;
		timkiem(ma);
		main();
		break;
	}case 4: {
		string xoa1;
		cout << "Nhap maseri:" << endl;
		cin >> xoa1;
		xoa(xoa1);
		xuat();
		main();
		break;
	}
	case 5: {
		xapxep();
		xuat();
		main();
		break;
	}
	case 6: {
		string id;
		cout << "Nhap maseri can sua" << endl;
		cin >> id;
		menucapnhat();
		capnhat(id);
		main();
		break;

	}
	default: {
		cout << "Vui long nhap lai" << endl;
		main();
		break;
	}

	}

}