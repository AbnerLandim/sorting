IDIR=../include
CC=gcc
CFLAGS=-g -Wall -std=gnu99 -I$(IDIR)
TARGET=srt

ODIR=obj
LDIR =../lib

LIBS=

_DEPS = sorting.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = bubble.o insertion.o main.o merge.o quick.o selection.o time.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
	rm -rf $(TARGET)
