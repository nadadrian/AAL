#!/bin/bash
cmake  -DCMAKE_CXX_FLAGS="-Werror -Wall -Wextra" .
cmake --build .
#./AAL