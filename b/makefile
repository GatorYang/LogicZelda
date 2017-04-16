HEADS = include/map.h include/menu.h include/monster.h include/player.h include/room.h include/space.h 
CPP = src/main.cpp src/map.cpp src/menu.cpp src/monster.cpp src/player.cpp src/room.cpp src/space.cpp

OBJS = main.o map.o menu.o monster.o player.o room.o space.o
CC = g++
DEBUG =
CFLAGS = -Wall -c $(DEBUG) -std=c++11
LFLAGS = -Wall $(DEBUG) -std=c++11
DEPS =

release/Project: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $@

main.o: $(DEPS) 
	$(CC) $(CFLAGS) src/main.cpp
	
map.o: $(DEPS) include/map.h
	$(CC) $(CFLAGS) src/map.cpp

menu.o: $(DEPS) include/menu.h
	$(CC) $(CFLAGS) src/menu.cpp

monster.o: $(DEPS) include/monster.h
	$(CC) $(CFLAGS) src/monster.cpp

player.o: $(DEPS) include/player.h
	$(CC) $(CFLAGS) src/player.cpp
	
room.o: $(DEPS) include/room.h
	$(CC) $(CFLAGS) src/room.cpp
	
space.o: $(DEPS) include/space.h
	$(CC) $(CFLAGS) src/space.cpp

clean:
	\rm *.o *~ edit

tar:
	\tar cfv  game.tar $(HEADS) $(CPP)
	
tarF:
	\tar cfv folders.tar include/ src/