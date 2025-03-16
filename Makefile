all:
	clang++ main.cpp command-list.cpp ./commands/time.cpp ./commands/echo.cpp -o Runeblade