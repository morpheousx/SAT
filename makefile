OBJECTS = literal.o clause.o CNF.o main.o solvers.o 
HEADERS = literal.h clause.h CNF.h solvers.h

p3: $(OBJECTS) main.o
	g++ $^ -o p3

%.o: %.cpp $(HEADERS)
	g++ -std=c++11 -c $< -o $@

clean:
	rm -f *.o p3
