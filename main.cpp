#include <iostream>

#include "xproduct.h"
#include "xbook.h"
#include "xcdcolection.h"
#include "xcomicbook.h"
#include "xgamecd.h"

using namespace std;

int main()
{

      XBook book(1002,"title", "great author", "awesome pub", 102.0, 2004, 300, "Blue" );
      book.printProductData();

return 0;
}

