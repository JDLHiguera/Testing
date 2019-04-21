CC = gcc
CFLAGS  = -std=c11 -g -Wall
SRC = $(addprefix src/, main.c usuario.c utilidades.c)
OBJS := $(SRC:.c=.o)
EXE = esinite

all: $(EXE)

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	@rm -f $(OBJS)

$(OBJS): $(SRC)

.PHONY: clean

clean:
	rm -f $(EXE)
	cd docs/ && rm -f *.log *.out *.synctex.gz *.toc *.aux
