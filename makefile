CFLAGS += -Wall -ggdb -O2
LDLIBS += -lm

TARGET = power-log

SOURCES = power-log.c corsair.c

OBJS = $(SOURCES:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

all: $(TARGET)

clean:
	$(RM) $(TARGET) $(OBJS)

.PHONY: all clean