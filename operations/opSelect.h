#pragma once

#include "operations/operation.h"


class opSelect:public operation
{
public:
	opSelect(controller* pCont);
	virtual ~opSelect();

	//select a shape 
	virtual void Execute();

};
#pragma once