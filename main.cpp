#include <iomanip>
#include <iostream>
#include <string>

#include "class.hpp"



int main()
 {

    Thing prod[MAX_NUM];
    std::string type;
    long budget;

    std::cout << "What is your budget?" << "\n";
    std::cin >> budget;
    std::cout << "What do you plan to buy?" << "\n";
    std::cin >> type;


   for (int i = 0; i < MAX_NUM; i++)
    {
    std::string name;
    double price;
    unsigned int rating;

    std::cout << "Product #" << i + 1 <<  "\n";
    std::cout << "Enter the name: ";
    std::cin >> name;
    std::getline(std::cin, name);



    std::cout << "Enter the price: ";
    std::cin >> price;

    std::cout << "Enter the rating (out of 10): ";
    std::cin >> rating;
    std::cin.ignore();

    prod[i].setName(name);
    prod[i].setPrice(price);
    prod[i].setRating(rating);

    }


  Thing lowest = lowestPrice(prod, MAX_NUM);


     std::cout << std::fixed << std::setprecision(2);
  std::cout << "\nThe " << type << " with the lowest price is " << lowest.getName();
  std::cout << " with a Price of $" << lowest.getPrice();
  std::cout << " and a rating of " << lowest.getRating();
  std::cout << std::endl;

  std::cout << "You will save " << budget - lowest.getPrice() << "$ according to your budget" << "\n";

  if (lowest.getRating() > 10 )
    {
      std::cout << "It's rating is 10 or greater, so it may be a great deal" << "\n";
    }
  else if ((lowest.getRating() > 5) && (lowest.getRating() < 10) )
  {
        std::cout << "It's rating is 5 or greater, so it may be a decent deal" << "\n";
  }
  else
      std::cout << "It's rating is below 5, so it may not be a good deal"  << "\n" ;
  return 0;
 }
 
