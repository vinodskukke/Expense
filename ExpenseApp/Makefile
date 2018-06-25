
expense.exe: main.o Member.o Account.o
	g++ main.o Member.o Account.o -o expense.exe

main.o: main.cpp Account.cpp Account.h Member.cpp Member.h
	g++ -c main.cpp

Member.o: Member.cpp Member.h
	g++ -c Member.cpp

Account.o: Account.cpp Account.h Member.cpp Member.h
	g++ -c Account.cpp

clean:
	rm -rf *.o *.exe

