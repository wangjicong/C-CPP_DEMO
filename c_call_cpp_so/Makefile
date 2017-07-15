testDemo:test.c libso
	gcc -o test test.c /home/wjc/shell/c_call_cpp_so/libso.so

libso:show.cpp
	g++ -fpic -shared -o libso.so show.cpp

clean:
	rm -rf *.so test