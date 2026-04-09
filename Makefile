CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -O2
SRC_DIR := src
BUILD_DIR := artifacts
TARGET := bis

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

.PHONY: all build clean run

all: $(BUILD_DIR) $(TARGET) run
build: $(BUILD_DIR) $(TARGET)
run:
	./$(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGET)
