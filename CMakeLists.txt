cmake_minimum_required(VERSION 3.8)
project(fb_analysis)

set(CMAKE_CXX_STANDARD 11)

add_executable(fb_analysis
        src/base64.cpp
        src/base64.hpp
        src/util.cpp
        src/util.hpp
        src/evaluator.hpp
        src/fb_analysis.cpp
        src/word_evaluator.cpp
        src/word_evaluator.hpp)
