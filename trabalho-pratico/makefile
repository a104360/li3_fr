CFLAGS = -Wall -Iincludes -g

SOURCES := src/main.c #outros .c da pasta src

OBJECTS := $(SOURCES:.c=.o)

.PHONY: all clean

EXECUTABLE := programa-principal

all: $(EXECUTABLE)

programa-principal: $(OBJECTS)
	gcc $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE)

clean: 
	rm -f src/*.o $(EXECUTABLE)
