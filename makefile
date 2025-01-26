CFLAGS += -Wall -ggdb -O2
LDLIBS += -lm

TARGET = power-log

all: $(TARGET)

clean:
	$(RM) $(TARGET)

.PHONY: all clean