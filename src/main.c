#include <stdio.h>
#include <stdlib.h>
#include <lua.h>
#include <lauxlib.h>

int main(int len, char *args[]) {

    char input[10], *str;
    long value = 0;

    printf("Enter A Number For Fact : ");
    scanf("%s", input);
    value = strtol(input, &str, 10);

    printf("Loading Lua Module\n");
    lua_State *fact = luaL_newstate();
    luaL_dofile(fact, "../lua/factorial.lua");
    lua_getglobal(fact, "fact");
    lua_pushinteger(fact, value);
    lua_pcall(fact, 1, 1, 0);
    lua_Number result = lua_tonumber(fact, -1);
    printf("Result from Lua Fact %ld", (long) result);
    lua_close(fact);
    return 0;
}
