CXX = g++
CXXFLAGS = -Iinclude -Wall

SRC = src
BUILD = build

SOURCES = $(wildcard $(SRC)/*.cpp)
OBJECTS = $(patsubst $(SRC)/%.cpp, $(BUILD)/%.o, $(SOURCES))

TARGET = $(BUILD)/programa

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

$(BUILD)/%.o: $(SRC)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(BUILD)/*.o $(TARGET)

# gpt slop. Eu entendi 50% e fiquei cm preguica