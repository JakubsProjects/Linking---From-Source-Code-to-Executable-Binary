all: preprocess compile assemble
	gcc -o main file1.o file2.o Header.h.o -g

preprocess: file1.c file2.c Header.h
	gcc -E file1.c -o file1.i 
	gcc -E file2.c -o file2.i
	gcc -E Header.h -o Header.h.i

compile: preprocess
	gcc -S file1.i
	gcc -S file2.i
	gcc -S Header.h.i

assemble: compile
	gcc -c file1.s
	gcc -c file2.s
	gcc -c Header.h.s

clean:
	rm *.o *.s *.i