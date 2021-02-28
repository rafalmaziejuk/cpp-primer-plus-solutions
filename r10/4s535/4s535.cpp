#include <iostream>
#include "sales.h"

int main(void)
{
	double sprzedaze[4] = { 1.0, 2.5, 3.7, 4.2 };
	
	SALES::Sales s1(sprzedaze, 4);
	s1.showSales();
	
	SALES::Sales s2;
	s2.showSales();
	s2.setSales();
	
	s2.showSales();

	return 0;
}