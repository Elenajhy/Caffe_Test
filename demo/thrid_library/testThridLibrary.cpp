#include <iostream>
#include "funset.hpp"

int main(int argc, char* argv[])
{
	int ret = test_ProtoBuf2();

	if (ret == 0) fprintf(stderr, "test success\n");
	else fprintf(stderr, "test fail\n");

	return 0;
}

