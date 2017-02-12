test: main.cpp
	clang++ -g -std=c++14 -Wall -Wextra -Wfloat-equal -Wshadow -Wpointer-arith -Wcast-align -Wstrict-prototypes -Wformat=2 -Wunreachable-code -pedantic *.cpp -o main
