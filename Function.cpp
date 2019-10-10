#include "Function.h"


void timKiemSachTheoTen(List list)
{
	string tenSach;
	cout << "Nhap ten sach can tim:"; getline(cin, tenSach); cin.ignore(1);
	NODE* foundBook = list.searchByName(tenSach);
	foundBook->getData().print();
}

void timKiemSachTheoMa(List list)
{
	string maSach;
	cout << "Nhap ten sach can tim:"; getline(cin, maSach); cin.ignore(1);
	NODE* foundBook = list.searchByISBN(maSach);
	foundBook->getData().print();
}

void timKiemSach(List list)
{
	int choice = 0;
	cout << "1. Tim kiem sach theo ten.\n";
	cout << "2. Tim kiem sach theo ma sach.\n";

	do {
		cout << "Chon chuc nang:"; cin >> choice;
	} while (choice <= 0 || choice >= 2);
	switch (choice)
	{
	case 1: timKiemSachTheoTen(list);
		break;
	case 2: timKiemSachTheoMa(list);
		break;
	}
}
