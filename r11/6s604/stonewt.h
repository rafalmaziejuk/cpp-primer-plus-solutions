#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
  private:
	  enum { Lbs_per_stn = 14 };
	  int stone;
	  double pds_left;
	  double pounds;

  public:
	  Stonewt(double lbs);
	  Stonewt(int stn, double lbs);
	  Stonewt(void);
	  ~Stonewt(void);

	  void show_lbs(void) const;
	  void show_stn(void) const;

	  bool operator<(const Stonewt &st);
	  bool operator>(const Stonewt &st);
	  bool operator<=(const Stonewt &st);
	  bool operator>=(const Stonewt &st);
	  bool operator==(const Stonewt &st);
	  bool operator!=(const Stonewt &st);
};

#endif