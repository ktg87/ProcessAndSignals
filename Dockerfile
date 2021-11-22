#The official Ubuntu Docker Image: hub.docker.com/_/ubuntu
FROM ubuntu:18.04

#Copy all of the files from our local directory into our Docker Image
#into a directory called StackAndHeap
COPY . /usr/src/StackAndHeap

#Set the work directory to be inside the directory we just created above
WORKDIR /usr/src/StackAndHeap

# Install necessary dependencies
RUN apt-get update &&\
    apt-get install -y --no-install-recommends \
        build-essential \
        autoconf \
        automake \
        libtool \
        pkg-config \
        apt-transport-https \
        ca-certificates \
        software-properties-common \
        wget \
        git \
        curl \
        gnupg \
        zlib1g-dev \
        swig \
        vim \
        gdb \
        valgrind \
        locales \
        locales-all &&\
    apt-get clean

# Install CMake
RUN wget -O - https://apt.kitware.com/keys/kitware-archive-latest.asc 2>/dev/null | apt-key add - &&\
    apt-add-repository "deb https://apt.kitware.com/ubuntu/ bionic main" &&\
    apt-get update &&\
    apt-get install -y cmake

ENV LC_ALL en_US.UTF-8
ENV LANG en_US.UTF-8
ENV LANGUAGE en_US.UTF-8
