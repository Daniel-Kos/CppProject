cmake_minimum_required(VERSION 4.4)
project(untitled1)

set(CMAKE_CXX_STANDARD 26)
add_compile_options(-fexec-charset=CP866)

add_executable(untitled1 greet.cpp)

add_executable(hello hello.cpp)

add_executable(dialog dialog.cpp)

add_executable(Listing_A "Session 2. Practice. Outputting Data/Listing/Listing A.cpp")

add_executable(Listing_B "Session 2. Practice. Outputting Data/Listing/Listing B.cpp")

add_executable(Listing_V "Session 2. Practice. Outputting Data/Listing/Listing V.cpp")

add_executable(calc1 "Session 3/calc.cpp")

add_executable(card "Session 2. Practice. Outputting Data/card.cpp")

add_executable(frame "Session 2. Practice. Outputting Data/frame.cpp")

add_executable(time "Session 3/time.cpp")

add_executable(average "Session 3/average.cpp")