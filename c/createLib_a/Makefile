
testDemo:liba.a test.o
	 gcc -o  a test.o  liba.a
	 
	 
liba:myfirstliba.o
	ar crv liba.a myfirstliba.o

myfirstliba:myfirstliba.c
	gcc -c myfirstliba.c

test:test.c
	gcc -c test.c

delo:
	rm -rf *.o
	 
clean:
	rm -rf *.o *.a a
