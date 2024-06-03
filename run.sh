#!/bin/bash
build/compiler mycode.c --IR > .innercode/mycode.ll

if grep -q "ERROR" .innercode/mycode.ll; then
    cat .innercode/mycode.ll
    exit 1
fi

llvm-link .innercode/mycode.ll sysyio/sysyio.ll -o .innercode/combined.bc
if [ $? -ne 0 ]; then
    echo "llvm-link failed"
    exit 1
fi

clang .innercode/combined.bc -o mycode
if [ $? -ne 0 ]; then
    echo "clang compilation failed"
    exit 1
fi

./mycode