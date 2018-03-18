#include "BaseApplication.hpp"

using namespace LazyGameEngine;

int	BaseApplication::Initialize()
{
	b_quit_ = false;
	return 0;
}

void BaseApplication::Finalize()
{
}

void BaseApplication::Tick()
{
}

bool BaseApplication::IsQuit()
{
	return b_quit_;
}
