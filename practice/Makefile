app:app.c add.o sub.o mul.o myArith.h
	gcc app.c add.o sub.o mul.o -o app libmyArith.a
add.o:add.c
	gcc -c add.c
sub.o:sub.c
	gcc -c sub.c
mul.o:mul.c
	gcc -c mul.c
clean:
	rm *.o app
	