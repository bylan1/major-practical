all: compile clear.cpp Options.cpp Menu.cpp MainMenu.cpp Grid.cpp OuterGrid.cpp GameRun.cpp Player.cpp Game.cpp main.cpp

compile: clear.cpp Options.cpp Menu.cpp MainMenu.cpp Grid.cpp OuterGrid.cpp GameRun.cpp Player.cpp Game.cpp main.cpp
	g++ clear.cpp Options.cpp Menu.cpp MainMenu.cpp Grid.cpp OuterGrid.cpp GameRun.cpp Player.cpp Game.cpp main.cpp -o main

run: main
	./main

git: clear.cpp Options.cpp Options.h Menu.cpp Menu.h MainMenu.cpp MainMenu.h Grid.cpp Grid.h OuterGrid.cpp OuterGrid.h GameRun.cpp GameRun.h Player.cpp Player.h Game.cpp Game.h main.cpp Makefile
	git add clear.cpp Options.cpp Options.h Menu.cpp Menu.h MainMenu.cpp MainMenu.h Grid.cpp Grid.h OuterGrid.cpp OuterGrid.h GameRun.cpp GameRun.h Player.cpp Player.h Game.cpp Game.h main.cpp Makefile
	git commit -m "finalfiles"
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