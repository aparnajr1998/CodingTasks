#include"book.h"
#include"library.h"
#include<iostream>
#include<string>
using namespace std;
 Book::Book():m_isbn(0),m_title(""),m_author(""),m_year(0),m_price(0.0),m_pages(0){
 }
  Book::Book(int id,std::string title,std::string author,int year,double price,int pages):m_isbn(id),m_title(title),m_author(author),m_year(year),m_price(price),m_pages(pages){
  }
  int Book::getIsbn() const{
   return m_isbn;
   }
  string Book::getTitle() const{
  return m_title;
  }
  string Book::getAuthor() const{
  return m_author;
  }
  int Book::getYear() const{
 return m_year;
 }
  double Book::getPrice() const{
  return m_price;
  }
  int Book::getPages() const{
  return m_pages;
  }
  void Book::display() const{
  std::cout<<"ISBN: "<<m_isbn<<"TITLE: "<<m_title<<"AUTHOR "<<m_author<<"YEAR "<<m_year<<"PRICE: "<<m_price<<"numberof pages "<<m_pages;
  }
