#include "List.h"


List::List()
{
	pHead = NULL;
	soSach = 0;
}

List::List(int soLuong)
{
	pHead = NULL;
	for (int i = 0; i < soLuong; i++) {
		addLast(new NODE);
	}
}


List::~List()
{
}

bool List::isEmptyList()
{
	if (pHead == NULL) {
		return true;
	}
	return false;
}

void List::input(int n)
{
	NODE* temp = pHead;
	for (int i = 0; i < n; i++) {
		cout << "Nhap sach thu " << i + 1 << ":\n";
		temp->input();
		cout << "----------------------------------";
		temp = temp->getNext();
		soSach++;
	}
}

void List::addLast(NODE* p)
{
	if (isEmptyList()) {
		pHead = p;
	}
	else {
		NODE* temp = pHead;
		while (temp->getNext() != NULL) {
			temp = temp->getNext();
		}
		temp->setNext(p);
	}
}


NODE* List::searchByName(string tenSach)
{
	NODE* temp = pHead;
	Sach tBook = temp->getData();

	for (int i = 0; i < soSach; i++) {
		if (tenSach == tBook.getTenSach()) {
			return temp;
		}
		temp = temp->getNext();
		tBook = temp->getData();
	}
	return nullptr;
}

NODE* List::searchByISBN(string maSach)
{
	NODE* temp = pHead;
	Sach tBook = temp->getData();

	for (int i = 0; i < soSach; i++) {
		if (maSach == tBook.getMaSach()) {
			return temp;
		}
		temp = temp->getNext();
		tBook = temp->getData();
	}
	return nullptr;
}

void List::xoaSach(Sach* sach)
{
	sach->~Sach();
}

NODE::NODE()
{
	book.setGiaSach(0);
	book.setTenSach("");
	pNext = NULL;
}

NODE::NODE(Sach aBook)
{
	book = aBook;
	pNext = NULL;
}

NODE::~NODE()
{
	pNext = NULL;
}

NODE* NODE::getNext()
{
	return pNext;
}

Sach NODE::getData()
{
	return book;
}

void NODE::setData(Sach aBook)
{
	book = aBook;
}

void NODE::setNext(NODE* pNext)
{
	this->pNext = pNext;
}

void NODE::input()
{
	book.input();
}

void NODE::print()
{
	book.print();
}
