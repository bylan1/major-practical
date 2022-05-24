all: compile clear.cpp Options.cpp Menu.cpp MainMenu.cpp Grid.cpp OuterGrid.cpp GameRun.cpp Player.cpp Game.cpp main.cpp

compile: clear.cpp Options.cpp Menu.cpp MainMenu.cpp Grid.cpp OuterGrid.cpp GameRun.cpp Player.cpp Game.cpp main.cpp
	g++ clear.cpp Options.cpp Menu.cpp MainMenu.cpp Grid.cpp OuterGrid.cpp GameRun.cpp Player.cpp Game.cpp main.cpp -o main

run: main
	./main

git: clear.cpp MainMenu.cpp MainMenu.h Options.cpp Options.h Menu.cpp Menu.h Grid.cpp Player.cpp Game.cpp Game.h main.cpp Grid.h Player.h Makefile
	git add clear.cpp MainMenu.cpp MainMenu.h Options.cpp Options.h Menu.cpp Menu.h Grid.cpp Player.cpp Game.cpp Game.h main.cpp Grid.h Player.h Makefile
	git commit -m "demo1files"
	git push

testPlayer: clear.cpp Player.cpp PlayerDriver.cpp
	g++ clear.cpp Player.cpp PlayerDriver.cpp -o PlayerDriver
	./PlayerDriver

testGrid: clear.cpp Grid.cpp GridDriver.cpp
	g++ clear.cpp Grid.cpp GridDriver.cpp -o GridDriver
	./GridDriver

testOuterGrid: clear.cpp Grid.cpp OuterGrid.cpp OuterGridDriver.cpp
	g++ clear.cpp Grid.cpp OuterGrid.cpp OuterGridDriver.cpp -o OuterGridDriver
	./OuterGridDriver

testOGPlayer: clear.cpp Grid.cpp OuterGrid.cpp Player.cpp OuterGridPlayerDriver.cpp
	g++ clear.cpp Grid.cpp OuterGrid.cpp Player.cpp OuterGridPlayerDriver.cpp -o OuterGridPlayerDriver
	./OuterGridPlayerDriver

testGameRun: clear.cpp Grid.cpp OuterGrid.cpp Player.cpp GameRun.cpp GameRunDriver.cpp
	g++ clear.cpp Grid.cpp OuterGrid.cpp Player.cpp GameRun.cpp GameRunDriver.cpp -o GameRunDriver
	./GameRunDriver