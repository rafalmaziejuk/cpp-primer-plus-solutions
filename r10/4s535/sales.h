#ifndef _SALES_H_
#define _SALES_H_

namespace SALES
{
	class Sales
	{
	private:
		static const int QUARTERS = 4;

		double m_sales[QUARTERS];
		double m_average;
		double m_max;
		double m_min;

	public:
		Sales(const double ar[] = NULL, int n = 0);
		~Sales(void);
		
		void setSales(void);
		void showSales(void) const;
	};
}

#endif