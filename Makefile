default: main.o
	./main.o
main.o: main.c
	gcc -o main.o main.c
clean:
	rm -rf *.o