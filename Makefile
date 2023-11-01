run:
	rm main
	gcc user_input.c -o main
	chmod +x main
	./main
clean:
	rm main
clear:
	clear