TARGET := test_of_logging

$(TARGET): main.c
	gcc -std=c99 -o $@ $^

clean:
	rm $(TARGET)
