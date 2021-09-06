#ifndef CLASS_HPP
#define CLASS_HPP
#include <string>


const int MAX_NUM = 3; //how many the person can list


class Thing
  {
    private:
    std::string Name;
    double Price;
    unsigned int Rating;


    public:
    void setName(std::string n) {Name = n;}
    void setPrice (double p) {Price = p;}
    void setRating (unsigned int r) {Rating = r;}

    std::string getName() {return Name;}
    double getPrice() {return Price;}
    unsigned int getRating() {return Rating;}
  };
Thing lowestPrice(Thing prod[], int size);


  #endif
