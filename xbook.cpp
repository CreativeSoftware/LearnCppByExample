#include "xbook.h"

XBook::XBook()
{
}

//XBook::XBook(int BarCode, const std::string Title, const std::string Author,
//             const std::string Publisher, int Year, float Price, int NoPages,
//             std::string Label)
//    :XProduct(BarCode, Title, Author, Publisher, Year, CalcPrice(Label)),
//      m_noPages(std::move(NoPages)),
//      m_label(std::move(Label))
    XBook::XBook(int BarCode, const std::string Title, const std::string Author,
                 const std::string Publisher, int Year, int NoPages,
                 std::string Label)
        :XProduct(BarCode, Title, Author, Publisher, Year, CalcPrice(Label)),
          m_noPages(std::move(NoPages)),
          m_label(std::move(Label))

{}

float XBook::CalcPrice(std::string Label){
    if (Label == "Blue"){
        m_price = 50.0;
    }

    else if (Label == "Green"){
        m_price = 10.0;
    }
    else {
        m_price = 0.0;
    }
    return m_price;
}

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

void XBook::SetPrice(std::string Label){
    m_price = CalcPrice(Label);
}
