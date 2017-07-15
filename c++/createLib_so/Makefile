	
testDemo:test.cpp myfirstlibso
	g++ -o test test.cpp /home/wjc/shell/c++/createLib_so/libso.so


myfirstlibso:Myfirstlibso.cpp
	g++ -fpic -shared -o libso.so Myfirstlibso.cpp
	
clean:
	rm -rf *.out test *.o *.so