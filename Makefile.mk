sample.pdf: sample.dat
	python3 graficar.py 1000 0 2
	rm *.x *.dat


sample.dat: sample.cpp
	gcc sample.cpp -lstdc++ -lm -o a.x
	./a.x 1000 0 2

