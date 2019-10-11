#ifndef LIST_H
#define LIST_h

#include "Book.h"

class BookList
{
private:
	vector<Sach> bookList;
public:
	BookList();
	~BookList();

	bool isEmptyList();

	void input(int);

	Sach getBook(int );

	int searchByName(string);
	int searchByISBN(string);

	void xoaSach(int);
};

class BillList {
private:
	vector<Bill> billList;
};

#endif