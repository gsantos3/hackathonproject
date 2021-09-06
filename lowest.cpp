#include "class.hpp"
Thing lowestPrice(Thing prod[], int size )
    {

      Thing lowestprice = prod[0];

      for (int i = 1; i < size; i++)
        {
          Thing temp = prod[i];
          if (lowestprice.getPrice() > temp.getPrice())
            {
              lowestprice = temp;
            }
        }
        return lowestprice;
    };
