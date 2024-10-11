# TARGET = main

# all:: $(TARGET)


# $(TARGET): main.cpp hello.cpp
# 	g++ -o $(TARGET) main.cpp hello.cpp

# clean:
# 	rm -rf $(TARGET)



main: main.o hello.o
	g++ main.o hello.o -o main

main.o: main.cpp
	g++ -c main.cpp

hello.o: hello.cpp
	g++ -c hello.cpp

clean:
	rm -rf main *.o

