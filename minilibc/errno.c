// DXGL
// Copyright (C) 2012 William Feely

// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

#include "common.h"

static int errorno;

int *_errno()
{
	return &errorno;
}

errno_t _set_errno(int value)
{
	errorno = value;
	return 0;
}

errno_t _get_errno(int *pValue)
{
	if(!pValue)
	{
		errorno = EINVAL;
		return EINVAL;
	}
	*pValue = errorno;
	return 0;
}