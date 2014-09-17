#include "xgamecd.h"

XGameCD::XGameCD()
{
    m_price = 50;
    m_gameScore = 1;
}

XGameCD::XGameCD(int BarCode, const std::string Title, const std::string Author, const std::string Publisher,
                 int Year, float Price, std::string MachineName, int GameScore)
    :XProduct(BarCode, Title, Author, Publisher,Year, Price=50),
     m_machine(std::move(MachineName)),
     m_gameScore(std::move(GameScore))
{}

int XGameCD::GetGameScore()const {

    return m_gameScore;

}

const std::string & XGameCD::GetMachineName() const{
    return m_machine;
}

void XGameCD::SetGameScore(int GameScore){
    m_gameScore = std::move(GameScore);
}

void XGameCD::SetMachineName(std::string MachineName){
    m_machine = std::move(MachineName);
}
