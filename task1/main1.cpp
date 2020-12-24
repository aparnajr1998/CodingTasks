#include<iostream>
#include<list>
#include"book.h"
#include"library.h"
#include"book.cxx"
#include "library.cxx"
using namespace std;
int main()
{
	Library l;
	l.addBook(123,"Sky","Manoj",2004,120.0,200);
	l.addBook(134,"flower","Maya",2005,150.0,250);
	l.addBook(154,"Star","Ann",2014,150.0,300);
	l.addBook(187,"nature","Praveen",20010,180.0,300);

	l.displayAll();

	std::cout<<l.isBookFound(154);
	//l.findBookwithMaxPages();
	l.removeBookByISBN(123);
	l.displayAll();
	std::cout<<l.findAveragePrice();
	std::cout<<l.countBooksInPriceRange(100, 150);
	return 0;
}
