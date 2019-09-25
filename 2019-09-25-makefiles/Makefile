all: sumas.x datos.txt fig.pdf
sumas.x : sumasWO.cpp
	g++ $< -o $@
datos.txt : sumas.x
	./sumas.x > datos.txt
fig.pdf : plot.gp datos.txt
	gnuplot plot.gp

.PHONY: clean
clean:
	rm -f sumas.x datos.txt fig.pdf 
