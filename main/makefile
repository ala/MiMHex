CXX = g++
OPTIONS = -Wall -W -Wextra -Wshadow -O0 -ggdb 
INCLUDE_DIR = -I ../lib -I ../implementation
DEST_DIR = .

all: benchmark main gather_patterns swap

benchmark: main_benchmark.cpp
	$(CXX) $(OPTIONS) $(INCLUDE_DIR) -o $(DEST_DIR)/hex_benchmark main_benchmark.cpp

main: main.cpp
	$(CXX) $(OPTIONS) $(INCLUDE_DIR) -o $(DEST_DIR)/hex main.cpp

gather_patterns: gather_patterns.cpp
	$(CXX) $(OPTIONS) $(INCLUDE_DIR) -o $(DEST_DIR)/gather_patterns gather_patterns.cpp -DBOARD_SIZE=13
	
swap:
	$(CXX) $(OPTIONS) $(INCLUDE_DIR) -o $(DEST_DIR)/hex_swap main_swap.cpp

clean:
	rm -f ${DEST_DIR}/hex ${DEST_DIR}/hex_benchmark ${DEST_DIR}/gather_patterns ${DEST_DIR}/hex_swap

