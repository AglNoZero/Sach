#include "Function.h"

void timKiemSachTheoTen(BookList list)
{
	string tenSach;
	cout << "Nhap ten sach can tim:"; getline(cin, tenSach); cin.ignore(1);
	int foundBookPos = list.searchByName(tenSach);
	list.getBook(foundBookPos).print();
}

void timKiemSachTheoMa(BookList list)
{
	string maSach;
	cout << "Nhap ten sach can tim:"; getline(cin, maSach); cin.ignore(1);
	int foundBookPos = list.searchByISBN(maSach);
	list.getBook(foundBookPos).print();
}

void timKiemSach(BookList list)
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