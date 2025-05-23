/*
    This file is part of Android File Transfer For Linux.
    Copyright (C) 2015-2025  Vladimir Menshakov

    This library is free software; you can redistribute it and/or modify it
    under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 2.1 of the License,
    or (at your option) any later version.

    This library is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this library; if not, write to the Free Software Foundation,
    Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#ifndef AFTL_MTP_PTP_EVENTCODE_H
#define AFTL_MTP_PTP_EVENTCODE_H

#include <mtp/types.h>

namespace mtp
{
	enum struct EventCode : u16
	{
#define ENUM_VALUE(NAME, VALUE) ENUM_VALUE_DECL(NAME, VALUE)
#		include <mtp/ptp/EventCode.values.h>
#undef ENUM_VALUE
	};
	DECLARE_ENUM(EventCode, u16);

	std::string ToString(EventCode code);
}

#endif
