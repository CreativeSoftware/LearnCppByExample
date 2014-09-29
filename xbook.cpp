#include "xbook.h"

XBook::XBook()
{
}

XBook::XBook(int BarCode, const std::string Title, const std::string Author,
             const std::string Publisher, int Year, float Price, int NoPages,
             std::string Label)
    :XProduct(BarCode, Title, Author, Publisher, Year, CalcPrice(Price)),
      m_noPages(std::move(NoPages)),
      m_label(std::move(Label))
{}

const std::string & XBook::GetLabel()const{
    return m_label;
}

int XBook::GetNoPages() const {
    return m_noPages;
}

void XBook::SetLabel(std::string Label){
    m_label = std::move(Label);
}

void XBook::SetNoPages(int NoPages){
    m_noPages = std::move(NoPages);
}
