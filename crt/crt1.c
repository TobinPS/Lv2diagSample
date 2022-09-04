#include <stdlib.h>
#include <ppu-types.h>
#include <sys/reent.h>
#include <sys/time.h>
#include <sys/dirent.h>
#include <sys/syscalls.h>

extern void _init();

extern int main(int argc,const char *[]);


void _initialize(int argc,const char *argv[])
{
//	_init();

	int ret = main(argc,argv);

	//exit(ret);
}
