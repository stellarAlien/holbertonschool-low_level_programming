#!/bin/bash
gcc -fPIC *.c -c && gcc -shared -o libdynami.so  *.o
