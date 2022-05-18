all: compile clear.cpp Cell.cpp Grid.cpp Player.cpp Game.cpp main.cpp

compile: clear.cpp Cell.cpp Grid.cpp Player.cpp Game.cpp main.cpp
	g++ clear.cpp Cell.cpp Grid.cpp Player.cpp demo1main.cpp -o main

run: main
	./main

git: clear.cpp Cell.cpp Grid.cpp Player.cpp Game.cpp Game.h main.cpp Cell.h Grid.h Player.h clear.cpp Makefile
	git add clear.cpp Cell.cpp Grid.cpp Player.cpp Game.cpp Game.h main.cpp Cell.h Grid.h Player.h clear.cpp Makefile
	git commit -m "demo1files"
	git push