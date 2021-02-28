#include <iostream>
#include "sales.h"

int main(void)
{
	SALES::Sales s1, s2;
	double sprzedaze[SALES::QUARTERS] = { 1.0, 2.5, 3.7, 4.2 };

	setSales(s1, sprzedaze, SALES::QUARTERS);	
	setSales(s2);

	showSales(s1);
	showSales(s2);

	return 0;
}