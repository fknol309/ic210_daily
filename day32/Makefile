point: point.cpp
	clang++ -c point.cpp

main0: main0.cpp
	clang++ -c main0.cpp

ex0: point.o main0.o
	clang++ -o ex0 main0.o point.o

triangle: triangle.cpp
	clang++ -c triangle.cpp

main1: main1.cpp
	clang++ -c main1.cpp

ex1: point.o triangle.o main1.o
	clang++ -o ex1 main1.o point.o triangle.o
