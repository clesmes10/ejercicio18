primer: ecuaciondeprimerorden.pdf
ecuaciondeprimerorden.pdf: grafica1ecu.py resulta.txt
	python grafica1ecu.py
resulta.txt: res
	./res > resulta.txt
res: ejercicio18.cpp
	c++ ejercicio18.cpp -o res
segundo: 2ordenequisye.pdf 2ordenyezeta.pdf
2ordenequisye.pdf: resulta2.py res2.txt
	python resulta2.py
2ordenyezeta.pdf: resulta2.py res2.txt
	python resulta2.py
res2.txt: resu
	./resu > res2.txt
resu:
	c++ ecuacion2orden.cpp -o resu
