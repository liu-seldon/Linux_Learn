libfoo.so: foo1.c foo2.c
	gcc -fpic -shared -o libfoo.so foo1.c foo2.c

hello: hello.c
	gcc -o hello hello.c -L. -lfoo -Wl,-rpath=.

all:
	make libfoo.so
	make hello


