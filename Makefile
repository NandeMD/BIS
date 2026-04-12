CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -O2
SRC_DIR := src
BUILD_DIR := artifacts
TARGET := bis

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

.PHONY: all build clean run

all: run
build: $(TARGET)
run: $(TARGET)
	./$(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# I acknowledge the use of [ChatGPT](https://chat.openai.com/) in the creation of this Makefile.
# It helped me on Line 8 with finding `patsubst` function
# And creation of the 23-24
# And simplifying all of the mess i created in the first place in this file
