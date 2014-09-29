#ifndef XPRODUCT_H
#define XPRODUCT_H

#include <string>
#include <iostream>
#include <vector>


class XProduct
{

protected:
    int m_barCode;
    std::string m_title;
    std::string m_author;
    std::string m_publisher;
    int m_year;
    float m_price;


public:
    XProduct();
    XProduct(int BarCode, std::string const Title, std::string const Author,
                std::string const Publisher, int Year, float Price);

    virtual ~XProduct();
//    ~XProduct();

    int GetBarCode() const;
    const std::string& GetTitle() const;
    const std::string& GetAuthor() const;
    const std::string& GetPublisher() const;
    int GetYear() const;
    float GetPrice() const;

    void setBarCode(int BarCode);
    void setTitle(std::string Title);
    void setAuthor(std::string Author);
    void setPublisher(std::string Publisher);
    void setYear(int Year);
    void setPrice(float Price);

    void printProductData() const;


};

#endif // XPRODUCT_H
