# syntax=ocker/dockerfiles:1

FROM ubuntu:22.04

RUN apt-get -y update && apt-get -y install python3 && apt-get -y install libgmpxx4ldbl

WORKDIR /app
COPY dist/gmpDemo.tar.gz .
RUN tar -xzf gmpDemo.tar.gz && rm gmpDemo.tar.gz
ENV LD_LIBRARY_PATH=/app:/lib/x86_64-linux-gnu:/lib64

CMD ["python3", "gmpDemo.py"]
