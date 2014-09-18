CFLAGS +=  -Wall

CC = gcc 
OBJECTS = drop_privs.o

test : test.o $(OBJECTS)
	$(CC) $(CFLAGS) -o test test.o $(OBJECTS) 


test.o: drop_privs.h
drop_privs.o: drop_privs.h

.PHONY : clean
    clean :
	-rm test test.o $(OBJECTS) 
    all:
	-sudo chown root:root test
	-sudo chmod 4755 test
