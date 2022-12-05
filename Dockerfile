FROM alpine:3.14
WORKDIR /workspaces/packer
COPY . .
RUN apk add make curl libcurl g++
RUN make