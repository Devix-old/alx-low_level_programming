#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int o;
	o = open("HELLO", O_RDWR | O_APPEND);

	write(o, "\b HELLO", 7);
}
