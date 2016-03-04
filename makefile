Lab06: main.o RandomGraph.o
	g++ -g main.o RandomGraph.o -o Lab06
main.o: main.cpp
	g++ -g -c main.cpp
RandomGraph.o: RandomGraph.cpp RandomGraph.h
	g++ -g -c RandomGraph.cpp
clean:
	rm *.o Lab06
