
$(warning 11)

testDemo:test.cpp libso
	g++ -o test test.cpp /home/wjc/shell/cpp_call_c_so/libso.so

$(warning 22)
libso:show.c
	gcc -fpic -shared -o libso.so show.c
	
clean:
	rm -rf *.o *.so test