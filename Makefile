packer: main.o
	g++ -Wall -lcurl main.o - bin/packer

main.o: main.cpp
	g++ -c main.cpp