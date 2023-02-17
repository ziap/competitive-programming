CFLAGS=-std=c++14 -Wall -Wextra -O3 -s -march=native -mtune=native

INPUTS=$(wildcard src/*.cpp)
OUTPUTS=$(patsubst %.cpp, bin/%, $(notdir $(INPUTS)))

PCH=pch/bits/stdc++.h.gch

.PHONY: all clean
all: $(OUTPUTS)

$(OUTPUTS): bin/%: src/%.cpp $(PCH)
	@mkdir -p bin
	$(CXX) $(CFLAGS) -o $@ $< -Ipch

$(PCH): pch/pch.h
	@mkdir -p pch/bits
	$(CXX) $(CFLAGS) -o $@ $<

clean:
	rm -rf bin pch/bits
