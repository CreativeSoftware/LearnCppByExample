#include "xcomicbook.h"

XComicBook::XComicBook()
{
}

XComicBook::XComicBook(int BarCode, const std::string Title, const std::string Author, const std::string Publisher, int Year,
                       int NoPages, std::string Label,
                       std::string Creator, std::string Universe)
    :XBook(BarCode, Title, Author, Publisher, Year,  NoPages, Label),
    m_creator(std::move(Creator)),
    m_universe(std::move(Universe))
{}

const std::string & XComicBook::GetCreator() const{
    return m_creator;
}

const std::string & XComicBook::GetUniverse() const{
    return m_universe;
}

void XComicBook::SetCreator(std::string Creator){
    m_creator = std::move(Creator);
}

void XComicBook::SetUniverse(std::string Universe){
    m_universe = std::move(Universe);
}

