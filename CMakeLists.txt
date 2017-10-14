cmake_minimum_required(VERSION 3.8)
project(wxWidgetsExample LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME}
        main.cpp
        src/MyApp.cpp
        include/MyApp.hpp
        include/MyFrame.hpp)

execute_process(
        COMMAND wx-config --cxxflags
        COMMAND wx-config --libs
        OUTPUT_VARIABLE WxFlags)

include_directories(${PROJECT_SOURCE_DIR}/include)
set(CMAKE_CXX_FLAGS ${WxFlags})

