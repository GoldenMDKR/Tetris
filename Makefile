CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99 -pedantic -D_DEFAULT_SOURCE
LDFLAGS =

SRC = main.c $(wildcard utils/*.c)
OBJ = ${SRC:.c=.o}

.PHONY: all

all: Tetris 

Tetris: ${OBJ} 
	${CC} ${LDLAGS} -o $@ ${OBJ}
# $@ -> Tetris 

.PHONY: clean

clean:
	${RM} ${OBJ}

