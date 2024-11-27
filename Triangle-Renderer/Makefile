triangle.out: *.cpp *.h
	gcc -c -Iinclude glad.c -o glad.o
	g++ -std=c++17 -Iinclude -I/opt/homebrew/Cellar/glfw/3.4/include -o triangle.out *.cpp glad.o `pkg-config --static --libs glfw3`


.PHONY: run clean

run:
	./triangle.out

clean:
	rm -f triangle.out