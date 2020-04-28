FROM ubuntu
COPY finder1.cpp ./
COPY finder3.cpp ./
COPY TEXT ./
RUN apt-get update
RUN apt-get install -y apt-file
RUN apt-get install -y vim
RUN apt-get install -y gdb
RUN apt-get install -y build-essential
