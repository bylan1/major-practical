all:compile Cell.cpp Grid.cpp Player.cpp demo1main.cpp

compile:Cell.cpp Grid.cpp Player.cpp demo1main.cpp
	g++ Cell.cpp Grid.cpp Player.cpp demo1main.cpp -o demo1main

run:demo1main
	./demo1main

git: Cell.cpp Grid.cpp Player.cpp demo1main.cpp Cell.h Grid.h Player.h
	git add Cell.cpp Grid.cpp Player.cpp demo1main.cpp Cell.h Grid.h Player.h
	git commit -m "demo1files"
	git push