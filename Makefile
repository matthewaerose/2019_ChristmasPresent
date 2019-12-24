CC=g++
CFLAGS=-I.
DEPS = menu.h
OBJ = menu.o main.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

theGift: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)


clean:
	rm -rf *.o