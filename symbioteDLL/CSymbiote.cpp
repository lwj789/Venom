#include "stdafx.h"
#include "CSymbiote.h"

#include <stdio.h>

__declspec(dllexport) CSymbiote::CSymbiote()
{
}


__declspec(dllexport) CSymbiote::~CSymbiote()
{
}

void __declspec(dllexport) CSymbiote::TestFunc()
{
	printf("test success");
}
