build: src/main.c
	mkdir build -p
	gcc -o build/gui src/main.c `pkg-config --cflags --libs gtk4`

run: build build/gui
	./build/gui
