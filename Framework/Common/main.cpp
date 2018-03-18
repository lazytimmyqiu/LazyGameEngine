#include <iostream>
#include "IApplication.hpp"

using namespace std;
using namespace LazyGameEngine;

namespace LazyGameEngine {
	// Declaration of the application instance
	extern	IApplication*	p_app;	
}

int main(int argc, char** argv)
{
	int ret = 0;

	if ((ret = p_app->Initialize()) != 0) {
		cerr << "App initialize failed, exit." << endl;
		return ret;
	}

	// loop unitil application recieved quit signal
	while (!p_app->IsQuit()) {
		p_app->Tick();
	}

	p_app->Finalize();

	return 0;
}
