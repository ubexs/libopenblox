/*
 * Copyright (C) 2017 John M. Harris, Jr. <johnmh@openblox.org>
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

#include "instance/Instance.h"

#ifndef OB_INST_INTVALUE
#define OB_INST_INTVALUE

namespace OB{
	namespace Instance{
		/**
		 * IntValue instances are used to store an integer value.
		 *
		 * @author John M. Harris, Jr.
		 */
		class IntValue: public Instance{
			public:
			    IntValue();
				virtual ~IntValue();

			    int getValue();
				void setValue(int value);

				DECLARE_LUA_METHOD(setValue);
				DECLARE_LUA_METHOD(getValue);

				static void register_lua_property_getters(lua_State* L);
				static void register_lua_property_setters(lua_State* L);

				DECLARE_CLASS(IntValue);

			    int Value;
		};
	}
}

#endif // OB_INST_INTVALUE


// Local Variables:
// mode: c++
// End: