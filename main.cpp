#include "calc.hpp"
#include <iomanip>
#include <iostream>
#include <string>


int main()
 {

   std::string type;
   long budget;
    std::cout << "What is your budget?" << "\n";
    std::cin >> budget;
    std::cout << "What are you planning to buy?" << "\n";
    std::cin >> type;

   Product prod[MAX_NUM_PRODUCTS];



   for (int i = 0; i < MAX_NUM_PRODUCTS; i++)
    {
    std::string name;
    double price;
    unsigned int rating;

    std::cout << "Product #" << i + 1 <<  "\n";
    std::cout << "Enter the name: ";
    std::cin >> name;

    std::cout << "Enter the price: ";
    std::cin >> price;

    std::cout << "Enter the rating: ";
    std::cin >> rating;
    std::cin.ignore();

    prod[i].setName(name);
    prod[i].setPrice(price);
    prod[i].setRating(rating);

    }

    Product lowest = lowestPrice(prod[], MAX_NUM_PRODUCTS)
    std::cout << "lowest is " << lowest.getName() << "\n";



     std::cout << std::fixed << std::setprecision(2);
  std::cout << "\nThe product with the lowest price is " << lowest.getName();
  std::cout << " with a Price of $" << lowest.getPrice();
  std::cout << " and a rating of " << lowest.getRating();
  std::cout << std::endl;

  return 0;
 }
