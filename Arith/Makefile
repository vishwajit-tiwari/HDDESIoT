# To Compile All the function togather
$(CC)=gcc -g
main: main.o add.o sub.o mul.o div.o
	$(CC) -o main main.o add.o sub.o mul.o div.o
main.o: main.c 
	$(CC) -c -o main.o main.c 
add.o: add.c 
	$(CC) -c -o add.o add.c 
sub.o: sub.c 
	$(CC) -c -o sub.o sub.c 
mul.o: mul.c 
	$(CC) -c -o mul.o mul.c 
div.o: div.c 
	$(CC) -c -o div.o div.c 

clean:
	rm -rf *.o main