#!/bin/bash

make -C src

docker build -t gmp-demo:latest .

./runDemo.sh

