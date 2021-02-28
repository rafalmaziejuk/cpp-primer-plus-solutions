#include <iostream>
#include "tv.h"

int main(void)
{
	Tv tv;
	Remote remote;

	tv.onoff();
	tv.settings();
	remote.show_mode();

	tv.change_remote_mode(remote);
	
	tv.settings();
	remote.show_mode();

	return 0;
}