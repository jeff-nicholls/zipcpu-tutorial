# Nexys Bringup
# Jeff Nicholls
# 2024

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS =

# Include directories (if any)
INCLUDES = -I /usr/share/verilator/include \
	-I ./objdir

# Source file
SRC = /usr/share/verilator/include/verilated.cpp \
	./thruwire.cpp \
	./obj_dir/Vthruwire__ALL.a

# Output executable
TARGET = thruwire

# Rules
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean
