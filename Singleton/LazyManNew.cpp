#include "LazyManNew.h"

LazyManNew& LazyManNew::GetInstance()
{
	static LazyManNew instance;
	return instance;
}

LazyManNew::LazyManNew()
{

}

LazyManNew::~LazyManNew()
{

}
