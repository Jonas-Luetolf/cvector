CC = cc
CFLAGS = -Wall -Wextra -pedantic -std=c11
LDFLAGS = -lm  
SRCS = main.c cvector/vector.c cvector/operations.c cvector/line.c cvector/helpers.c
OBJS = $(SRCS:.c=.o)
TARGET = test
OUT_FILE = test.out

.PHONY: all clean run compile

all: compile

compile: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: compile
	./$(TARGET)

$(OUT_FILE): compile
	./$(TARGET) > $(OUT_FILE)

clean:
	rm -f $(OBJS) $(TARGET) $(OUT_FILE)

