// C++ wrapper for Lua header files.

#ifndef __cplusplus
#error "c++ environment is required"
#endif

#include "lauxlib.h"
#include "lua.h"
#include "lualib.h"

LUALIB_API int (luaopen_cjson)(lua_State *L);
LUALIB_API int (luaopen_struct)(lua_State *L);
LUALIB_API int (luaopen_cmsgpack)(lua_State *L);
LUALIB_API int (luaopen_bit)(lua_State *L);
