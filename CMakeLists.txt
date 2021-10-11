cmake_minimum_required(VERSION 3.20)
project(lua-c-binding C)

find_package(Lua51 REQUIRED)
set(CMAKE_C_STANDARD 11)

add_executable(lua-c-binding src/main.c)
target_link_libraries(lua-c-binding ${LUA_LIBRARIES})

