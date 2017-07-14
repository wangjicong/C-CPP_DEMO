test:test.c libso
	gcc -o test test.c /home/wjc/shell/c/createLib_SO/libso.so
	
libso:myfirstso.c 
	gcc -fpic -shared -o libso.so myfirstso.c
	
clean:
	rm -rf test libso.so
