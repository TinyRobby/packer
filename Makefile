packer: main.o
	g++ -Wall -lcurl main.o -o bin/packer

replit-packer: main.o
	g++ -Wall main.o -o bin/replit/packer

main.o: main.cpp
	g++ -c main.cpp

run: 
	bin/packer