#ifndef STONEWT_H_
#define STONEWT_H_

#include <iostream>

class Stonewt
{
  private:
	  enum { Lbs_per_stn = 14 };

	  int stone;
	  double pds_left;
	  double pounds;
	  char mode;

  public:
	  Stonewt(double lbs);
	  Stonewt(int stn, double lbs);
	  Stonewt(void);
	  ~Stonewt(void);

	  void set_mode(char m = 's');

	  Stonewt operator+(const Stonewt &st) const;
	  Stonewt operator-(const Stonewt &st) const;
	  Stonewt operator*(const Stonewt &st) const;

	  friend std::ostream & operator<<(std::ostream &os, const Stonewt &st);
};

#endif