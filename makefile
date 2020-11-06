CC = gcc
CFLAGS = -lm -I -Wall
DEPS = model.h view.h controller.h test_main.h
OBJ = test_main.o model.o view.o controller.o

%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test_main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm *.o