#ifndef XGAMECD_H
#define XGAMECD_H

#include "xproduct.h"
class XGameCD: public XProduct
{
    std::string m_machine;
    int m_gameScore;

public:
    XGameCD();
    XGameCD(int BarCode, std::string const Title, std::string const Author,
            std::string const Publisher, int Year, float Price, std::string MachineName, int GameScore);


    const std::string& GetMachineName() const;
    int GetGameScore() const;

    void SetMachineName(std::string MachineName);
    void SetGameScore(int GameScore);


};

#endif // XGAMECD_H
