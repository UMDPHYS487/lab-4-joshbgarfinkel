TARGET = HelloWorld-Ex1
SRC = $(TARGET).cpp

clean:
	@rm -f $(TARGET)

$(TARGET): $(TARGET).o
	@clang++ $(TARGET).o -o $(TARGET) 2>/dev/null || echo "Error"

$(TARGET).o: $(SRC)
	@clang++ -c $(SRC) 2>/dev/null || echo "Error"