
all: program module
	./program

program: program.cpp
	c++ -W -Wall -g -I./lua-5.1.4_MacOS107_lib/include -L./lua-5.1.4_MacOS107_lib/ -llua5.1 program.cpp -o program

module: module/src/lib.rs
	cargo build
