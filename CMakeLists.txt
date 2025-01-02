cmake_minimum_required(VERSION 3.16)
project(codeforces)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# https://discourse.nixos.org/t/get-clangd-to-find-standard-headers-in-nix-shell/11268/8
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

if(CMAKE_EXPORT_COMPILE_COMMANDS)
  set(CMAKE_CXX_STANDARD_INCLUDE_DIRECTORIES 
      ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES})
endif()

add_executable(angry_monk angry_monk.cpp)
add_executable(watermelon watermelon.cpp)
add_executable(books books.cpp)
add_executable(two_buttons two_buttons.cpp)
