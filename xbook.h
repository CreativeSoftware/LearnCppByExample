#ifndef XBOOK_H
#define XBOOK_H

#include "xproduct.h"


class XBook : public XProduct
{

protected:
    int m_noPages;
    std::string m_label;

public:
    XBook();
    XBook(int BarCode, std::string const Title, std::string const Author,
          std::string const Publisher, int Year, float Price, int NoPages, std::string Label);

    const std::string & GetLabel() const;
    int GetNoPages() const;

    void SetLabel(std::string Label);
    void SetNoPages(int NoPages);
};

#endif // XBOOK_H