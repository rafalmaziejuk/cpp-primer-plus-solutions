#include <iostream>
#include "stonewt.h"

using std::cout;

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	mode = 'l';
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = 's';
}

Stonewt::Stonewt(void)
{
	stone = pounds = pds_left = 0;
	mode = 's';
}

Stonewt::~Stonewt(void)
{

}

void Stonewt::set_mode(char m)
{
	if (m != 's' && m != 'l')
		cout << "Podano niepoprawny tryb wyswietlania!\n";
	else
		mode = m;
}

Stonewt Stonewt::operator+(const Stonewt &st) const
{
	return Stonewt(pounds + st.pounds);
}

Stonewt Stonewt::operator-(const Stonewt &st) const
{
	return Stonewt(pounds - st.pounds);
}

Stonewt Stonewt::operator*(const Stonewt &st) const
{
	return Stonewt(pounds * st.pounds);
}

std::ostream & operator<<(std::ostream &os, const Stonewt &st)
{
	if (st.mode == 's')
		os << st.stone << " kamieni, " << st.pds_left << " funtow\n";
	else if (st.mode == 'l')
		os << st.pounds << " funtow\n";

	return os;
}