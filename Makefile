CC = cc
SRC = *.c
Name = 104light

all:
	$(CC) -o $(Name)  $(SRC) -lm -W -Wall

clean:
	rm -f $(Name) *~ 