#ifdef __MONEYCALC_HPP__
#define __MONEYCALC_HPP__
#include <string>

const int MAX_PRODUCTS = 3 //how many the person can list

class Prodcut 
  {
    private:
    std::string Name;
    double Price;
    unsigned int Rating;
    const long budget;
    
    public:
    void setName(std::string n) {Name = n;}
    void setPrice (double p) {Price = p;}
    void setRating (unsigned int r) {Rating = r;}

    std::string getName() {return Name;}
    double setPrice() {return Price;}
    unsigned int setRating() {return Rating;}
  };

  Product lowestPrice(Product prod[], int size );

  #endif
