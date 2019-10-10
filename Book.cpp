#include "Book.h"

Sach::Sach()
{
	tenSach = "";
	maSach = "";
	giaSach = 0;
}

Sach::Sach(string tenSach, string maSach, int giaSach)
{
	this->tenSach = tenSach;
	this->maSach = maSach;
	this->giaSach = giaSach;
}

Sach::Sach(const Sach& b)
{
	this->tenSach = b.tenSach;
	this->maSach = b.maSach;
	this->giaSach = b.giaSach;
}


Sach::~Sach()
{
}

void Sach::setTenSach(string tenSach)
{
	this->tenSach = tenSach;
}

void Sach::setMaSach(string maSach)
{
	this->maSach = maSach;
}

void Sach::setGiaSach(int giaSach)
{
	this->giaSach = giaSach;
}

void Sach::capNhatGia()
{
	cout << "Nhap gia sach moi: "; cin >> giaSach;
}


string Sach::getTenSach()
{
	return tenSach;
}

string Sach::getMaSach()
{
	return maSach;
}

int Sach::getGiaSach()
{
	return giaSach;
}

void Sach::input()
{
	cout << "Nhap ten sach:"; getline(cin, tenSach);
	cout << "Nhap ma sach:"; getline(cin, maSach);
	cout << "Nhap gia sach:"; cin >> giaSach; cin.ignore(1);
}

void Sach::print()
{
	cout << "Ten sach: " << tenSach << endl;
	cout << "Ma sach:" << maSach << endl;
	cout << "Gia sach:" << giaSach << endl;
}

