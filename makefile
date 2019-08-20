p1c:
	gcc -o p1c 1_Euler.c
	./p1c
p1cpp:
	g++ -o p1cpp 1_Euler.cpp
	./p1cpp

clean:
	if [ -f 1_Euler.c~ ]; then rm 1_Euler.c~; fi;
	if [ -f 1_Euler.cpp~ ]; then rm 1_Euler.cpp~; fi;
	if [ -f 1_Euler.java~ ]; then rm 1_Euler.java~; fi;
	if [ -f 1_Euler.py~ ]; then rm 1_Euler.py~; fi;
	if [ -f makefile~ ]; then rm makefile~; fi;
