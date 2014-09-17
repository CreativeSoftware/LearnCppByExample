#include "xcdcolection.h"

XCdColection::XCdColection()
{
}

XCdColection::XCdColection(int BarCode, std::string const Title, std::string const Author,
                           std::string const Publisher, int Year, float Price,
                           std::vector<XMusicCD> CdCollection)
    : XProduct(BarCode, Title, Author, Publisher, Year, Price),
      m_CdCollection(std::move(CdCollection)) {}

const std::vector <XMusicCD>& XCdColection::GetCds() const {
    return m_CdCollection;
}


void XCdColection::addCD(XMusicCD NewCD){
    m_CdCollection.emplace_back(std::move(NewCD));
}
