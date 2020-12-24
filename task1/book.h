#ifndef __BOOK_H
#define __BOOK_H
#include<iostream>
#include<string>
using namespace std;
class Book {
  int m_isbn;     //ideally to be std::string
  std::string m_title;
  std::string m_author;
  //std::string m_publisher;
  int m_year;       //publishing
  double m_price;
  int m_pages;
  public:
  Book();
  Book(int,std::string,std::string,int,double,int);
  int getIsbn() const;
  string getTitle() const;
  string getAuthor() const;
  int getYear() const;
  double getPrice() const;
  int getPages() const;
  void display() const;
  //TODO: param ctor
  //TODO: getter functions - isbn(), title(), author()
  //                       - author(), publisher(), year()
  //                       - price(), pages()
  //TODO:- display
  //TODO:- const suffix for immutable function

};
#endif
