# gmpDemo & docker application
# BUILD INSTRUCTIONS:  gmpDemo, shared library, and python module

cd src
make
cd ..

# BUILD DOCKER IMAGE
docker build -t gmp-demo:latest .
docker run -it gmp-demo:latest
