#!/bin/bash
gcc *.c -c -fPIC -c && gcc *.o -shared -o liball.so
