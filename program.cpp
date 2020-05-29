#include <lua.hpp>

void execute(const char* filename) {
  lua_State *state = luaL_newstate();
  luaL_openlibs(state);

  int result = luaL_loadfile(state, filename) || lua_pcall(state, 0, LUA_MULTRET, 0);
  if ( result != 0 ) {
    const char* message = lua_tostring(state, -1);
    puts(message);
    lua_pop(state, 1);
    return;
  }

  lua_close(state);
}

int main() {
  execute("test.lua");

  return 0;
}