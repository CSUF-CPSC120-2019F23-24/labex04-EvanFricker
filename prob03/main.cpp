// Sales prediction

#include <iostream>

int main()
{

  // Defining my constants and variables

  const double INCREASE = 0.18;
  const long LAST_YEAR_SALES = 2103419277;
  double Sales_Increase;
  long Predicted_Sales;

  // Displaying the sales from last year

  std::cout << "Last years sales were $" << LAST_YEAR_SALES << '\n';

  // Calculating this years predicted increase in sales

  Sales_Increase = INCREASE * LAST_YEAR_SALES;

  // Calculating the overall predicted sales

  Predicted_Sales = Sales_Increase + LAST_YEAR_SALES;

  // Displaying the predicted sales

  std::cout << "This years predicted sales are $" << Predicted_Sales << '\n';

  return 0;
}
