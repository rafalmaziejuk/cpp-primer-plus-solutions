#include <iostream>
#include "stonewt.h"

using std::cout;

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt(void)
{
	stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt(void)
{

}

void Stonewt::show_lbs(void) const
{
	cout << pounds << " funtow\n";
}

void Stonewt::show_stn(void) const
{
	cout << stone << " kamieni, " << pds_left << " funtow\n";
}

bool Stonewt::operator<(const Stonewt &st)
{
	return pounds < st.pounds ? true : false;
}

bool Stonewt::operator>(const Stonewt &st)
{
	return pounds > st.pounds ? true : false;
}

bool Stonewt::operator<=(const Stonewt &st)
{
	return pounds <= st.pounds ? true : false;
}

bool Stonewt::operator>=(const Stonewt &st)
{
	return pounds >= st.pounds ? true : false;
}

bool Stonewt::operator==(const Stonewt &st)
{
	return pounds == st.pounds ? true : false;
}

bool Stonewt::operator!=(const Stonewt &st)
{
	return pounds != st.pounds ? true : false;
}