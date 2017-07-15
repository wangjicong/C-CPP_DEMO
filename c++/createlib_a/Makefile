testDemo:test.o liba.a
	g++ -o test test.o liba.a

liba:Myfirstliba.o
	ar crv liba.a Myfirstliba.o

myfirstlibao:Myfirstliba.cpp
	g++ -c Myfirstliba.cpp

testo:test.cpp
	g+= -c test.cpp
	
clean:
	rm -rf *.o