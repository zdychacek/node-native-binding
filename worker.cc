#include <cstdlib>
#include "worker.h"

int DoWork (int seconds) {
	sleep(seconds);

	return seconds;
}