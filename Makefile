packer: main.o
	g++ -Wall -lcurl obj/main.o -o bin/packer

replit-packer: main.o
	g++ -Wall obj/main.o -o bin/replit/packer

main.o: main.cpp
	g++ -c main.cpp -o obj/main.o

run: 
	bin/packer
