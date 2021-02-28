#include <iostream>
#include "tv.h"

bool Tv::volup(void)
{
   if (volume < MaxVal)
   {
      volume++;
      return true;
   }
   else
      return false;
}

bool Tv::voldown(void)
{
   if (volume > MinVal)
   {
      volume--;
      return true;
   }
   else
      return false;
}

void Tv::chanup(void)
{
   if (channel < maxchannel)
      channel++;
   else
      channel = 1;
}

void Tv::chandown(void)
{
   if (channel > 1)
      channel--;
   else
      channel = maxchannel;
}

void Tv::settings(void) const
{
   using std::cout;
   using std::endl;

   cout << "Telewizor jest " << (state == Off ? "Wylaczony" : "Wlaczony") << endl;

   if (state == On)
   {
      cout << "Glosnosc = " << volume << endl;
      cout << "Program = " << channel << endl;
      cout << "Tryb = " << (mode == Antenna ? "antena" : "kabel") << endl;
      cout << "Wejscie = " << (input == TV ? "TV" : "VCR") << endl;
   }
}

void Tv::change_remote_mode(Remote &r) const
{
	if (state == On)
	{
		if (r.modeRemote == Remote::NORMAL)
			r.modeRemote = Remote::INTERACTIVE;
		else
			r.modeRemote = Remote::NORMAL;
	}
}

void Remote::show_mode(void) const
{
	std::cout << "Tryb pilota = " << (modeRemote == NORMAL ? "NORMAL" : "INTERACTIVE") << std::endl;
}