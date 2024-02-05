#!/bin/bash

make -C src

docker build -t gmp-demo:latest .
docker run -it gmp-demo:latest

