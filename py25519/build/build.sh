#!/bin/sh
if [ -z "$1" ]; then
	echo "This file is intended to used only during package installation"
	exit 0
fi
cd $(dirname $0)/../c/
make libs
cd ..
\cp -rf c/. ../$1/c/.

make distclean
chmod -x $0 1>/dev/null 2>&1
