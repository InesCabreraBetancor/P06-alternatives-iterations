# Universidad de La Laguna
# Escuela Superior de Ingenieria y Tecnología
# Grado en Ingeniería Informatica
# Informatica Basica
#
# @author Ines Cabrera Betancor
# @date 20 / OCT / 2023
# @biref Makefile

CXX = g++
CXXFLAGS = -std=c++17 -Wall
OBJ = P34279_add_one_second
all:  ${OBJ}
${OBJ}: obj_add_one_second
	$(CXX) $(CXXFLAGS) -o $@ $@.o
obj_add_one_second:
	$(CXX) $(CXXFLAGS) -c ${OBJ}.cc
.PHONY: clean
clean:
	rm -rf *.o
	rm -rf ${OBJ}
