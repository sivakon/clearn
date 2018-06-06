CC = cc
CFLAGS = 

all: vanilla

vanilla:
	mkdir target
	$(CC) $(CFLAGS) -o target/helper.o -c helper.c
	$(CC) $(CFLAGS) -o target/main.o -c main.c
	$(CC) $(CFLAGS) target/main.o target/helper.o

short:
	$(CC) $(CFLAGS) -I. helper.c main.c
	
archive:
	ar -rv libhelper.a target/helper.o target/main.o

clean:
	rm -rf target *.a ./a.out *.dylib

# this is important for creating a shared library
shared:
	$(CC) $(CFLAGS) -shared -fpic helper.c main.c -o libhelper.dylib

shared_run:
	$(CC) $(CFLAGS) main.c libhelper.dylib

# Important way to understand
# Put libhelper.dylib into /usr/local/lib -> -L/location/of/dylib
# Put header files into /usr/local/include -> -I/location/of/header
# Compile using -lhelper
another_way:
	$(CC) $(CFLAGS) main.c -lhelper -L/Users/sivaram.konanki/Documents/c/SharedLibraryTutorial -I/Users/sivaram.konanki/Documents/c/SharedLibraryTutorial