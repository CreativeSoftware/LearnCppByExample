#include <iostream>

#include "xproduct.h"
#include "xbook.h"
#include "xcdcolection.h"
#include "xcomicbook.h"
#include "xgamecd.h"
#include "xaudiotrack.h"


using namespace std;

int main()
{

      XBook book(1002,"title", "great author", "awesome pub", 2004, 300, "Blue" );
      book.printProductData();

      XComicBook comic(1004, "patinhas", "GG", "hj", 100, 400,"Blue", "Stan Lee", "Marvel");
      comic.printProductData();

return 0;
}

