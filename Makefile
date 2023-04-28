# Generate A make file here running main.cpp
# Date: 2/17/2021

default:
	gcc -o main main.c 

clean:
	rm  main

run:
	./main