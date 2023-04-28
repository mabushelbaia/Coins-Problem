BUILD = gcc
TARGET = main
SRC = main.c

default:
	$(BUILD) -o $(TARGET) $(SRC)

clean:
	rm $(TARGET)

run: default
	./$(TARGET)