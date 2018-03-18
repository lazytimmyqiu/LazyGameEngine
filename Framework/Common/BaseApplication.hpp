#pragma once

#include "IApplication.hpp"

namespace LazyGameEngine {

class BaseApplication : public IApplication
{
public:
	virtual	int		Initialize();
	virtual	void	Finalize();
	virtual	void 	Tick();

	virtual	bool	IsQuit();

protected:
	bool b_quit_;

};

}
