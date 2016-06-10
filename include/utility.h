/*
 * Copyright (C) 2016 John M. Harris, Jr. <johnmh@openblox.org>
 *
 * This file is part of OpenBlox.
 *
 * OpenBlox is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenBlox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the Lesser GNU General Public License
 * along with OpenBlox.	 If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef OB_UTILITY
#define OB_UTILITY

#include "obtype.h"

/**
 * @file utility.h
 * @author John M. Harris, Jr.
 * @date May 2016
 * 
 * This file defines utility functions used internally by the OpenBlox
 * engine.
 */

namespace OB{
	/**
	 * Returns the current time in milliseconds.
	 * 
	 * @returns ob_int64 time in millis
	 * @author John M. Harris, Jr.
	 */
	ob_int64 currentTimeMillis();
}

#endif // OB_UTILITY

// Local Variables:
// mode: c++
// End:
