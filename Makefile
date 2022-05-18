all: compile clear.cpp Options.cpp Menu.cpp MainMenu.cpp Cell.cpp Grid.cpp Player.cpp Game.cpp main.cpp

compile: clear.cpp Options.cpp Menu.cpp MainMenu.cpp Cell.cpp Grid.cpp Player.cpp Game.cpp main.cpp
	g++ clear.cpp Options.cpp Menu.cpp MainMenu.cpp Cell.cpp Grid.cpp Player.cpp Game.cpp main.cpp -o main

run: main
	./main

git: clear.cpp Cell.cpp MainMenu.cpp MainMenu.h Options.cpp Options.h Menu.cpp Menu.h Grid.cpp Player.cpp Game.cpp Game.h main.cpp Cell.h Grid.h Player.h Makefile
	git add clear.cpp Cell.cpp MainMenu.cpp MainMenu.h Options.cpp Options.h Menu.cpp Menu.h Grid.cpp Player.cpp Game.cpp Game.h main.cpp Cell.h Grid.h Player.h Makefile
	git commit -m "demo1files"
	git push