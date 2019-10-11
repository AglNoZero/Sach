#ifndef BOOK_H
#define BOOK_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Sach
{
private:
	string tenSach;
	string maSach;
	int giaSach;

public:
	Sach();
	Sach(string, string, int);
	Sach(const Sach&);
	~Sach();

	void setTenSach(string);
	void setMaSach(string);
	void setGiaSach(int);
	void capNhatGia();

	string getTenSach();
	string getMaSach();
	int getGiaSach();

	void input();
	void print();
};


#endif
