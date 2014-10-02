#include "xproduct.h"

XProduct::XProduct()
{
}

XProduct::XProduct(int BarCode, const std::string Title, const std::string Author,
                   const std::string Publisher, int Year, float Price)
    : m_barCode(std::move(BarCode)),
      m_title(std::move(Title)),
      m_author(std::move(Author)),
      m_publisher(std::move(Publisher)),
      m_year(std::move(Year)),
      m_price(std::move(Price))

{}
XProduct::~XProduct() {}

int XProduct::GetBarCode() const {
    return m_barCode;
}

const std::string& XProduct::GetTitle() const {
    return m_title;
}

const std::string& XProduct::GetAuthor() const{
    return m_author;
}

const std::string& XProduct::GetPublisher() const{
    return m_publisher;
}


int XProduct::GetYear() const{
    return m_year;
}

float XProduct::GetPrice() const {
    return m_price;
}

void XProduct::setBarCode(int BarCode) {
    m_barCode = std::move(BarCode);
}

void XProduct::setTitle(std::string Title) {
    m_title = std::move(Title);
}

void XProduct::setAuthor(std::string Author) {
    m_author= std::move(Author);
}

void XProduct::setPublisher(std::string Publisher){
   m_publisher = std::move(Publisher);
}

void XProduct::setYear(int Year){
    m_year = std::move(Year);
}

void XProduct::setPrice(float Price){
    m_price = std::move(Price);
}

void XProduct::printProductData() const {
     std::cout << "Bar code: " << m_barCode << std::endl;
     std::cout << "Title: " << m_title << std::endl;
     std::cout << "Author: " << m_author << std::endl;
     std::cout << "Publisher: " << m_publisher << std::endl;
     std::cout << "Price: " << m_price << std::endl;
     std::cout << "Year: " << m_year << std::endl;

}



