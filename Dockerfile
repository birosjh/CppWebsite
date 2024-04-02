FROM gcc:13.2.0

WORKDIR /code

RUN apt update && apt -y install git cmake build-essential libasio-dev