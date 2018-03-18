#pragma once

#include "Interface.hpp"

namespace LazyGameEngine {

class	IRuntimeModule {
	
public:
	virtual	~IRuntimeModule() {}		// Class for inheritance

	virtual	int		Initialize() = 0;
	virtual	void	Finalize() = 0;
	virtual	void	Tick() = 0;
};

}
