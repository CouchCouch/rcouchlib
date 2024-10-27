test: treelist.o treenode.o main.o
	g++ -g -o  main main.o treelist.o treenode.o

treelist.o: src/treelist/treelist.cpp src/treelist/treelist.h
	g++ -g -c -I src/treelist src/treelist/treelist.cpp

treenode.o: src/treelist/treenode.cpp src/treelist/treenode.h
	g++ -g -c -I src/treelist src/treelist/treenode.cpp

main.o: src/main.cpp
	g++ -g -c -I src/treelist src/main.cpp