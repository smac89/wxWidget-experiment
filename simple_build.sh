#!/usr/bin/env bash

WIDGET_FLAGS="$(wx-config --cxxflags) $(wx-config --libs)"
COMMAND="c++ main.cpp src/* -std=c++11 -Iinclude ${WIDGET_FLAGS} -o ${1:-widgets_example}"

echo -e "\n$COMMAND\n"

eval "$COMMAND"
