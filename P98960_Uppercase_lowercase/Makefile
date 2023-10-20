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
OBJ = P98960_uppercase_lowercase
all:  ${OBJ}
${OBJ}: obj_P98960_uppercase_lowercase
	$(CXX) $(CXXFLAGS) -o $@ $@.o
obj_P98960_uppercase_lowercase:
	$(CXX) $(CXXFLAGS) -c ${OBJ}.cc
.PHONY: clean
clean:
	rm -rf *.o
	rm -rf ${OBJ}
