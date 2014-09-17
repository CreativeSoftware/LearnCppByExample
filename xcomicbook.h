#ifndef XCOMICBOOK_H
#define XCOMICBOOK_H

#include "xbook.h"


class XComicBook: public XBook
{
    std::string m_creator;
    std::string m_universe;

public:
    XComicBook();
    XComicBook(int BarCode, std::string const Title, std::string const Author,
               std::string const Publisher, int Year, float Price, int NoPages, std::string Label,
               std::string Creator, std::string Universe);

    const std::string & GetCreator() const;
    const std::string & GetUniverse() const;

    void SetCreator(std::string Creator);
    void SetUniverse(std::string Universe);
};

#endif // XCOMICBOOK_H
