main:main.o my_stack
	gcc main.o my_stack.o -o main

main.o: main.c
	gcc -c main.c

my_stack:my_stack.c
	gcc -c my_stack.c

clean:
	if [ -e result ] ; then rm result ; fi
	rm *.o
