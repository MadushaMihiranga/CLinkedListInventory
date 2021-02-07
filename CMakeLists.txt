# cmake_minimum_required(VERSION <specify CMake version here>)
project(_LinkedListInventory C)

set(CMAKE_C_STANDARD 99)

add_executable(_LinkedListInventory main.c LinkedList.h Inventory.h item.h)