<<<<<<< HEAD
# Don't use this! It's an old Makefile
=======
packer: main.o
	g++ -Wall  obj/main.o -lcurl -o bin/packer

replit-packer: main.o
	g++ -Wall obj/main.o -o bin/replit/packer

main.o: main.cpp
	g++ -c main.cpp -lcurl -o obj/main.o

run: 
	bin/packer
# Old Makefile don't use

>>>>>>> 5e74471a210350e67aaf696e57c7d160962c134d
packer: main.o
	g++ -Wall  obj/main.o -lcurl -o bin/packer

replit-packer: main.o
	g++ -Wall obj/main.o -o bin/replit/packer

main.o: main.cpp
	g++ -c main.cpp -lcurl -o obj/main.o

run: 
	bin/packer
