# Компилятор
CXX = g++

# Флаги компиляции
CXXFLAGS = -std=c++20 -Wall -Wextra -O2

# Цель по умолчанию
all: main

# Компиляция main.cpp в исполняемый файл main
main: main.cpp
	$(CXX) $(CXXFLAGS) -o main main.cpp

# Очистка
clean:
	rm -f main

# Защита от конфликта с файлами, названными как цели
.PHONY: all clean