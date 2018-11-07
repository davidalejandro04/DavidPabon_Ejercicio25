sample.pdf: sample.dat
	python3 graficar.py 1000 0 2
	rm *.x *.dat


sample.dat: sample.cpp
	g++ sample.cpp -lm -o a.x
	./a.x 1000 0 2

