#!/bin/bash

docker run --privileged -it --rm -v `pwd`/../../:/rainfall gdb-peda
