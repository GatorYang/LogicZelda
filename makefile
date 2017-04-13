HEADS =  map.h monster.h player.h include/Room.h include/Space.h menu.h
CPP = main.cpp src/Room.cpp src/Space.cpp

OBJS = main.o Space.o Room.o
CC = g++
DEBUG =
CFLAGS = -Wall -c $(DEBUG) -std=c++11
LFLAGS = -Wall $(DEBUG) -std=c++11
DEPS = 

created/game: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $@

main.o: $(DEPS) monster.h player.h map.h menu.h
	$(CC) $(CFLAGS) main.cpp

Room.o: $(DEPS) include/Room.h
	$(CC) $(CFLAGS) src/Room.cpp

Space.o: $(DEPS) include/Space.h
	$(CC) $(CFLAGS) src/Space.cpp

clean:
	\rm *.o *~ edit

tar:
	\tar cfv  game.tar $(HEADS) $(CPP)