#ifndef XBOOK_H
#define XBOOK_H

#include "xproduct.h"


class XBook : public XProduct
{

float CalcPrice(std::string Label);

protected:
    int m_noPages;
    std::string m_label;



public:
    XBook();
    //XBook(int BarCode, std::string const Title, std::string const Author,
      //    std::string const Publisher, int Year, float Price, int NoPages, std::string Label);
    XBook(int BarCode, std::string const Title, std::string const Author,
          std::string const Publisher, int Year, int NoPages, std::string Label);


    const std::string & GetLabel() const;
    int GetNoPages() const;

    void SetPrice(std::string Label);
    void SetLabel(std::string Label);
    void SetNoPages(int NoPages);

};
#endif // XBOOK_H
