// Sales prediction
#include<iostream>

int main()
{
  // defind the variable

  const double percent_increase = 0.18;

  const int total_sale = 2103419277;

  unsigned sale_perdiction;

  // calcuation

  sale_perdiction = total_sale * percent_increase + total_sale ;

  // display the result

std::cout << "Last year's sales were $" << total_sale << std::endl;
std::cout << "This year's sales perdiction: $" << sale_perdiction << std::endl;


}
