# Konfiguration des Buildsystems CMake
#-------------------------------------------#

# Setzt den Pfad für clang++ auf Windows.
if(WIN32)
    # Für weitere Informationen, siehe das Dokument "Kompilieren auf Windows" (auf eCampus).
    set(CMAKE_CXX_COMPILER "C:/Program Files/mingw/bin/clang++.exe" CACHE STRING "")
    set(CMAKE_C_COMPILER "C:/Program Files/mingw/bin/clang.exe" CACHE STRING "")
endif()
# Minimale Version des Buildsystems
cmake_minimum_required(VERSION 3.14)
# Name des Projekts
project(Zettel10)

# Optionen
#-------------------------------------------#

# Setzte verwendeten C++-Standard auf C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Prüfe ob Heapspeicher gefunden wird,
# der nicht freigegeben wurde
add_compile_options(-fsanitize=address)
add_link_options(-fsanitize=address)

# Füge selbsgeschriebene Includes hinzu
include_directories(include)
# Füge externe Includes hinzu
# include_directories(external)

# Baue Programme
#-------------------------------------------#
file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(aufg2 examples/aufg2.cpp ${SRC_FILES})
add_executable(aufg3 examples/aufg3.cpp ${SRC_FILES})

