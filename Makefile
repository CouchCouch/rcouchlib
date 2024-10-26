main: treelist.o treenode.o main.o
	g++ -o main treelist.o treenode.o main.o 

treelist.o: ./src/treelist/treelist.cpp ./src/treelist/treelist.h
	g++ -c ./src/treelist/treelist.cpp -o treelist.o

treenode.o: ./src/treelist/treenode.cpp ./src/treelist/treenode.h
	g++ -c ./src/treelist/treenode.cpp -o treenode.o

main.o: ./src/main.cpp
	g++ -c ./src/main.cpp -o main.o