#ifndef TV_H_
#define TV_H_

class Remote;

class Tv
{
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;

public:
	friend class Remote;

	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, VCR };

	Tv(int s = Off, int mc = 100) :
		state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}

	void onoff(void) { state = (state == On) ? Off : On; }
	bool ison(void) const { return state == On; }
	bool volup(void);
	bool voldown(void);
	void chanup(void);
	void chandown(void);
	void set_mode(void) { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input(void) { input = (input == TV) ? VCR : TV; }
	void settings(void) const;
	void change_remote_mode(Remote &r) const;
};

class Remote
{
private:
	enum { NORMAL, INTERACTIVE };
	int modeTV;
	int modeRemote;

public:
	friend class Tv;

	Remote(int mTV = Tv::TV, int mR = NORMAL) : modeTV(mTV), modeRemote(mR) { }

	bool volup(Tv &t) { return t.volup(); }
	bool voldown(Tv &t) { return t.voldown(); }
	void onoff(Tv &t) { t.onoff(); }
	void chanup(Tv &t) { t.chanup(); }
	void chandown(Tv &t) { t.chandown(); }
	void set_chan(Tv &t, int c) { t.channel = c; }
	void set_mode(Tv &t) { t.set_mode(); }
	void set_input(Tv &t) { t.set_input(); }
	void show_mode(void) const;
};


#endif