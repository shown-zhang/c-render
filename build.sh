#!/bin/bash
echo "Cleaning up..."
rm -rf build && rm -rf bin
printf "\n\n"
echo "Building library: "
mkdir build && cd build && cmake .. && make && cd .. && printf "\n\n" && echo "Build successful!"
printf "\n\n" && echo "Start running the program: "
./bin/C_Render