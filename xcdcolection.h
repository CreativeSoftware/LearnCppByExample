#ifndef XCDCOLECTION_H
#define XCDCOLECTION_H


#include "xmusiccd.h"


#include "xproduct.h"

//class XCdColection: public XProduct
class XCdColection: public XProduct
{
    std::vector <XMusicCD> m_CdCollection;

public:
    XCdColection();
    XCdColection(int BarCode, std::string const Title, std::string const Author,
                 std::string const Publisher, int Year, float Price,
                 std::vector <XMusicCD> CdCollection );

    const std::vector <XMusicCD>& GetCds() const;

    void addCD(XMusicCD NewCD);


};
#endif // XCDCOLECTION_H
