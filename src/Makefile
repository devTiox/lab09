# Kompilator
CC = gcc

# Flagi kompilacji
CFLAGS = -Wall -Wextra -O2

# Nazwa programu wykonywalnego
TARGET = program

# Pliki źródłowe i nagłówkowe
SRCS = main.c backsubst.c gauss.c mat_io.c
HEADERS = backsubst.h gauss.h mat_io.h
OBJS = $(SRCS:.c=.o)

# Reguła domyślna (kompilacja projektu)
all: $(TARGET)

# Kompilacja programu wykonywalnego
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Reguła kompilacji plików obiektowych
main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Czyszczenie plików obiektowych i wykonywalnych
clean:
	rm -f $(OBJS) $(TARGET)
