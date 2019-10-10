#ifndef LIST_H
#define LIST_h

#include "Book.h"

class NODE {
private:
	Sach book;
	NODE* pNext;
public:
	NODE();
	NODE(Sach);
	~NODE();
	
	
	NODE* getNext();
	Sach getData();
	void setData(Sach);
	void setNext(NODE* pNext);
	void input();
	void print();
};

class List
{
private:
	NODE* pHead;
	int soSach;
public:
	List();
	List(int);
	~List();

	bool isEmptyList();

	void input(int);
	void addLast(NODE* p);

	NODE* searchByName(string);
	NODE* searchByISBN(string);

	void xoaSach(Sach* sach);
};

#endif