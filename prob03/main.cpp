// Sales prediction
#include<iostream>

int main()
{
  // defind the variable

  const double PERCENT_INCREASE = 0.18;

  const int TOTAL_SALE = 2103419277;

  unsigned sale_perdiction;

  // calcuation

  sale_perdiction = TOTAL_SALE * PERCENT_INCREASE + TOTAL_SALE ;

  // display the result

std::cout << "Last year's sales were $" << TOTAL_SALE << std::endl;
std::cout << "This year's sales perdiction: $" << sale_perdiction << std::endl;

return 0;


}
