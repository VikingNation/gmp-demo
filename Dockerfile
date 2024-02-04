# syntax=ocker/dockerfiles:1

FROM ubuntu:22.04

WORKDIR /app
COPY dist/example.py .
COPY dist/_example.so .
COPY dist/gmpDemo .
COPY dist/libGmpClass.so.0.1 .

ENV LD_LIBRARY_PATH=/app:/lib/x86_64-linux-gnu:/lib64

CMD ["/app/gmpDemo", ""]
