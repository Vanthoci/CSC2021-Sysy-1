#!/bin/bash
build/compiler mycode.c --IR > mycode.ll
llvm-link mycode.ll sysyio/sysyio.ll -o combined.bc
clang combined.bc -o mycode
./mycode