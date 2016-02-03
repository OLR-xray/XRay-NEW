#pragma warning(push)
#pragma warning(disable:4503)

#include "stdafx.h"


#pragma todo(remove this hack)
// Dima needs this because we have to exclude option /EHsc (exception handling) from the project
namespace boost {
	void  throw_exception(const std::exception &A)
	{
		Debug.fatal(DEBUG_INFO, "Boost exception raised %s", A.what());
	}
};
