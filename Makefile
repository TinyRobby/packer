packer: main.o
	g++ -Wall  obj/main.o -lcurl -o bin/packer

replit-packer: main.o
	g++ -Wall obj/main.o -o bin/replit/packer

main.o: main.cpp
	g++ -c main.cpp -lcurl -o obj/main.o

run: 
	bin/packer
# Old Makefile don't use

packer: main.o
	g++ -Wall  obj/main.o -lcurl -o bin/packer

replit-packer: main.o
	g++ -Wall obj/main.o -o bin/replit/packer

main.o: main.cpp
	g++ -c main.cpp -lcurl -o obj/main.o

run: 
	bin/packer
