FROM alpine:3.14
WORKDIR $(pwd)
COPY . .
RUN apk add make curl libcurl g++ cmake
RUN cd build/build
RUN ls
#RUN cmake ..
#RUN make
#RUN ./packer
