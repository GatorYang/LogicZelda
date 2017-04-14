HEADS =  include/room.h include/defs.h include/space.h include/map.h include/player.h include/menu.h include/monster.h
CPP = main.cpp src/room.cpp src/space.cpp  src/map.cpp src/player.cpp src/menu.cpp src/monster.cpp

OBJS = main.o space.o room.o player.o map.o menu.o monster.o
CC = g++
DEBUG =
CFLAGS = -Wall -c $(DEBUG) -std=c++11
LFLAGS = -Wall $(DEBUG) -std=c++11
DEPS = 

release/Project: $(OBJS)
   $(CC) $(LFLAGS) $(OBJS) -o $@

main.o: $(DEPS)
   $(CC) $(CFLAGS) main.cpp

room.o: $(DEPS) include/room.h include/defs.h
   $(CC) $(CFLAGS) src/room.cpp

space.o: $(DEPS) include/space.h
   $(CC) $(CFLAGS) src/space.cpp
   
map.o: $(DEPS) include/map.h
   $(CC) $(CFLAGS) src/map.cpp
   
player.o: $(DEPS) include/player.h
   $(CC) $(CFLAGS) src/player.cpp
   
menu.o: $(DEPS) include/menu.h
   $(CC) $(CFLAGS) src/menu.cpp

monster.o: $(DEPS) include/monster.h
   $(CC) $(CFLAGS) src/monster.cpp

clean:
   \rm *.o *~ edit

tar:
   \tar cfv  game.tar $(HEADS) $(CPP)