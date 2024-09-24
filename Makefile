CFLAGS = -Wall 

# Directories
SRC_DIR = src
GAME_DIR = $(SRC_DIR)/game
UTILS_DIR = $(SRC_DIR)/utils
LIBS = -L/usr/lib -lSDL2 -lSDL2_ttf -lSDL2_image
SDL2_INCLUDE_DIR = /usr/include/SDL2
SDL2_TTF_INCLUDE_DIR = /usr/include/SDL2
BUILD_DIR = build
DIRS = $(SRC_DIR) $(GAME_DIR) $(UTILS_DIR) 
# Source files
SOURCES = \
    $(SRC_DIR)/main.cpp \
    $(GAME_DIR)/Game.cpp \
    $(GAME_DIR)/GameEntity.cpp \
    $(UTILS_DIR)/Position.cpp \

# Object files
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/$(SRC_DIR)/%.o,$(SOURCES)) \
          $(patsubst $(LABLIB_DIR)/%.c,$(BUILD_DIR)/%.o,$(LABLIB_SOURCES))

# Executable
EXECUTABLE = ants

# Build rules
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	g++ $(CXXFLAGS) -o $@ $^ $(LIBS) 

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	g++ $(CXXFLAGS) -I$(SDL2_INCLUDE_DIR) -I$(SDL2_TTF_INCLUDE_DIR) -c -o $@ $< 

$(BUILD_DIR)/%.o: $(LABLIB_DIR)/%.c | $(BUILD_DIR)
	gcc $(CXXFLAGS) -I$(SDL2_INCLUDE_DIR) -I$(SDL2_TTF_INCLUDE_DIR) -c -o $@ $<

init:
	mkdir -p $(BUILD_DIR) && cd $(BUILD_DIR) && mkdir -p $(DIRS) && cp -r ../res .

clean:
	rm -rf $(BUILD_DIR) $(EXECUTABLE)
