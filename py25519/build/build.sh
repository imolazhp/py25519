#!/bin/sh
cd $(dirname $0)/../c/
make libs
cd ..
\cp -rf c/. ../$1/c/.
