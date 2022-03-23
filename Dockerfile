FROM debian:stable-slim
RUN apt-get update && apt-get install -y build-essential
WORKDIR /build
COPY myapp.c .
RUN gcc -o myapp -g myapp.c
