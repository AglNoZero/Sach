#include "List.h"

BookList::BookList()
{
}

BookList::~BookList()
{
}

bool BookList::isEmptyList()
{
	return bookList.empty();
}

void BookList::input(int soLuong)
{
	for (int i = 0; i < soLuong; i++) {
		cout << "Nhap sach thu " << i + 1 << ":\n";
		bookList[i].input();
		cout << "---------------------------------------------\n";
	}
}

Sach BookList::getBook(int pos)
{
	if (isEmptyList()) {
		return;
	}
	return bookList[pos];
}

int BookList::searchByName(string name)
{
	if (isEmptyList) {
		cout << "Khong co sach de tim kiem!\n";
		return NULL;
	}
	for (int i = 0; i < bookList.size(); i++) {
		if (name == bookList[i].getTenSach()) {
			return i;
		}
	}
	return NULL;
}

int BookList::searchByISBN(string maSach)
{
	if (isEmptyList) {
		cout << "Khong co sach de tim kiem!\n";
		return NULL;
	}
	for (int i = 0; i < bookList.size(); i++) {
		if (maSach == bookList[i].getMaSach()) {
			return i;
		}
	}
	return NULL;
}

void BookList::xoaSach(int viTri)
{
	if (isEmptyList()) {
		cout << "Khong co gi de xoa!\n";
	}
	bookList.erase(bookList.begin() + viTri);
}
