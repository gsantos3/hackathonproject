#include "calc.hpp"
#include "main.cpp"
Product lowestPrice(Product prod[], int size )  
    {
      Product lowestprice = prod[0];

      for (int i = 1; i < size; i++)
        {
          Product temp = prod[i];
          if (lowestPrice.getPrice() > temp.getPrice())
            {
              lowestprice = temp;
            }
        }
        return lowestprice;
    };
