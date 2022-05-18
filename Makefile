all:compile Cell.cpp Grid.cpp Player.cpp demo1main.cpp

compile:clear.cpp Cell.cpp Grid.cpp Player.cpp demo1main.cpp
	g++ clear.cpp Cell.cpp Grid.cpp Player.cpp demo1main.cpp -o demo1main

run:demo1main
	./demo1main

git: clear.cpp Cell.cpp Grid.cpp Player.cpp demo1main.cpp Cell.h Grid.h Player.h clear.cpp Makefile
	git add clear.cpp Cell.cpp Grid.cpp Player.cpp demo1main.cpp Cell.h Grid.h Player.h clear.cpp Makefile
	git commit -m "demo1files"
	git push