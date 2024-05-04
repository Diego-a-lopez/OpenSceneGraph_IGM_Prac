# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11

# Libraries
LIBS = -losg -losgViewer -losgDB -losgUtil -losgGA -lOpenThreads

# Targets
all: 

make:
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCE) $(LIBS)

run:
    ./$(TARGET)

clean:
    rm -f $(TARGET)

.PHONY: all make run clean

