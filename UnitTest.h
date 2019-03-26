#pragma once
#include <string>
#include "additionalFunc.h"
#include "MainScreen.h"
using namespace std;
using namespace MainScreen;
///TESTS///
bool test1() {
	cout << "Test of <int convertCharArrayToInt(char in[10])>... ";
	//Input scenarios
	if (convertCharArrayToInt("233") == 233) { cout << "Passed!" << endl; return true; }
	else { cout << "Failed!" << endl; return false; }
	//
}
bool test2() {
	bool check = true;
	cout << "Test of <string returnCurrentMonthString(int m)>... ";
	//Input scenarios
	if (returnCurrentMonthString(1) != "January") { cout << "Failed <January>!" << endl; check = false; }
	if (returnCurrentMonthString(2) != "February") { cout << "Failed <February>!" << endl; check = false; }
	if (returnCurrentMonthString(3) != "March") { cout << "Failed <March>!" << endl; check = false; }
	if (returnCurrentMonthString(4) != "April") { cout << "Failed <April>!" << endl; check = false; }
	if (returnCurrentMonthString(5) != "May") { cout << "Failed <May>!" << endl; check = false; }
	if (returnCurrentMonthString(6) != "June") { cout << "Failed <June>!" << endl; check = false; }
	if (returnCurrentMonthString(7) != "July") { cout << "Failed <July>!" << endl; check = false; }
	if (returnCurrentMonthString(8) != "August") { cout << "Failed <August>!" << endl; check = false; }
	if (returnCurrentMonthString(9) != "September") { cout << "Failed <September>!" << endl; check = false; }
	if (returnCurrentMonthString(10) != "October") { cout << "Failed <October>!" << endl; check = false; }
	if (returnCurrentMonthString(11) != "November") { cout << "Failed <November>!" << endl; check = false; }
	if (returnCurrentMonthString(12) != "December") { cout << "Failed <December>!" << endl; check = false; }
	if (returnCurrentMonthString(34) != "January") { cout << "Failed <Wrong input>!" << endl; check = false;}
	//
	if (check) cout << "All the scenarios passed!" << endl;
	return check;
}
bool test3() {
	bool check = true;
	cout << "Test of <int convertStringToInt(string oldOne)>... ";
	//Input scenarios
	if (convertStringToInt("12") != 12) { cout << "Failed <Correct number>!" << endl; check = false; }
	if (convertStringToInt("0012") != 12) { cout << "Failed <Incorrect number>!" << endl; check = false; }
	if (convertStringToInt("000") != 0) { cout << "Failed <Bad ZERO>!" << endl; check = false; }
	if (convertStringToInt("0") != 0) { cout << "Failed <Good ZERO>!" << endl; check = false; }
	//
	if (check) cout << "All the scenarios passed!" << endl;
	return check;
}
bool test4() {
	bool check = true;
	cout << "Test of <bool leapYear(int y)>... ";
	//Input scenarios
	if (!leapYear(2016)) { cout << "Failed <Correct leap year>" << endl; check = false; }
	if (leapYear(2014)) { cout << "Failed <Incorrect leap year>" << endl; check = false; }
	//
	if (check) cout << "Passed!" << endl;
	return check;
}
bool test5() {
	bool check = true;
	cout << "Test of <bool fullMonth(int m)>... ";
	//Input scenarios
	if (!fullMonth(5)) { cout << "Failed <Correct Month>!" << endl; check = false; }
	if (fullMonth(9)) { cout << "Failed <Incorrect Month>!" << endl; check = false; }
	if (fullMonth(45)) { cout << "Failed <Random number bigger than 12>" << endl; check = false; }
	if (check) cout << "All the scenarios passed!" << endl;
	return check;
}
bool test6() {
	bool check = true;
	cout << "Test of <int nextMonth(int curr)>... ";
	//Input scenarios
	if (nextMonth(4) != 5) { cout << "Failed <Correct Month>!" << endl; check = false; }
	if (nextMonth(12) != 1) { cout << "Failed <Last Month>!" << endl; check = false; }
	if (nextMonth(30) != 1) { cout << "Failed <Incorrect Month>" << endl; check = false; }
	if (nextMonth(0) != 1) { cout << "Failed <Zero Month>!" << endl; check = false; }
	if (nextMonth(-23) != 1) { cout << "Failed <Below Zero Month>!" << endl; check = false; }
	if (check) cout << "All the scenarios passed!" << endl;
	return check;
}
bool test7() {
	bool check = true;
	cout << "Test of <int prevMonth(int curr)>... ";
	//Input scenarios
	if (prevMonth(4) != 3) { cout << "Failed <Correct Month>!" << endl; check = false; }
	if (prevMonth(1) != 12) { cout << "Failed <First Month>!" << endl; check = false; }
	if (prevMonth(30) != 12) { cout << "Failed <Incorrect Month>!" << endl; check = false; }
	if (prevMonth(0) != 12) { cout << "Failed <Zero Month>!" << endl; check = false; }
	if (prevMonth(-23) != 12) { cout << "Failed <Below Zero Month>!" << endl; check = false; }
	if (check) cout << "All the scenarios passed!" << endl;
	return check;
}
bool test8() {
	bool check = true;
	cout << "Test of <string GetRank(int rank)>...";
	//Input scenarios
	if (GetRank(3) != "Status: Admin") { cout << "Failed <Admin>!" << endl; check = false; }
	if (GetRank(2) != "Status: Team Leader") { cout << "Failed <Team Leader>!" << endl; check = false; }
	if (GetRank(1) != "Status: Regular User") { cout << "Failed <Regular User>!" << endl; check = false; }
	if (GetRank(42) != "Status: Regular User") { cout << "Failed <Incorrect User>!" << endl; check = false; }
	if (check) cout << "All the scenarios passed!" << endl;
	return check;
}
bool test9() {
	bool check = true;
	cout << "Test of <String ^ returnCurrentMonth(int m)>... ";
	//Input scenarios
	if (returnCurrentMonth(1) != "January") { cout << "Failed <January>!" << endl; check = false; }
	if (returnCurrentMonth(2) != "February") { cout << "Failed <February>!" << endl; check = false; }
	if (returnCurrentMonth(3) != "March") { cout << "Failed <March>!" << endl; check = false; }
	if (returnCurrentMonth(4) != "April") { cout << "Failed <April>!" << endl; check = false; }
	if (returnCurrentMonth(5) != "May") { cout << "Failed <May>!" << endl; check = false; }
	if (returnCurrentMonth(6) != "June") { cout << "Failed <June>!" << endl; check = false; }
	if (returnCurrentMonth(7) != "July") { cout << "Failed <July>!" << endl; check = false; }
	if (returnCurrentMonth(8) != "August") { cout << "Failed <August>!" << endl; check = false; }
	if (returnCurrentMonth(9) != "September") { cout << "Failed <September>!" << endl; check = false; }
	if (returnCurrentMonth(10) != "October") { cout << "Failed <October>!" << endl; check = false; }
	if (returnCurrentMonth(11) != "November") { cout << "Failed <November>!" << endl; check = false; }
	if (returnCurrentMonth(12) != "December") { cout << "Failed <December>!" << endl; check = false; }
	if (returnCurrentMonth(34) != "January") { cout << "Failed <Wrong input>!" << endl; check = false; }
	//
	if (check) cout << "All the scenarios passed!" << endl;
	return check;
}
bool test10() {
	cout << "Test of <string converSpecialStringToString(String ^ oldOne)>... ";
	string temp = "Try me";
	//Input scenarios
	if (converSpecialStringToString(gcnew String("Try me")) != temp) { cout << "Failed!" << endl; return false; }
	cout << "Passed!" << endl;
	return true;
}
bool test11() {
	cout << "Test of <String ^ returnYear(int y)>... ";
	String ^ temp1 = gcnew String("2020");
	String ^ temp2 = gcnew String("0032");
	bool check = true;
	//Input scenarios
	if (returnYear(2020) != temp1) { cout << "Failed <Conventional Year>!" << endl; check = false; }
	if (returnYear(32) != temp2) { cout << "Failed <Unconventional Year>!" << endl; check = false; }
	if (check) cout << "All the scenarios passed!" << endl;
	return check;
}
bool test12() {
	cout << "Test of <int convertSpecialStringToInt(String ^ oldOne)>... ";
	bool check = true;
	//Input scenarios
	if (convertSpecialStringToInt(gcnew String("23")) != 23) { cout << "Failed <Conventional Number>!" << endl; check = false; }
	if (convertSpecialStringToInt(gcnew String("0023")) != 23) { cout << "Failed <Unconventional Number>!" << endl; check = false; }
	if (convertSpecialStringToInt(gcnew String("0")) != 0) { cout << "Failed <Conventional Zero>!" << endl; check = false; }
	if (convertSpecialStringToInt(gcnew String("000")) != 0) { cout << "Failed <Conventional Zero>!" << endl; check = false; }
	if (check) cout << "All the scenarios passed!" << endl;
	return check;
}
///TESTS COMBINATION///
void UnitTest() {
	bool test = true;
	cout << "UNIT TEST" << endl << "===========" << endl << "Started..." << endl;
	//TESTS APPLICATION:
	//======
	test = test && test1();//Test 1 - int convertCharArrayToInt(char in[10])
	test = test && test2();//Test 2 - string returnCurrentMonthString(int m)
	test = test && test3();//Test 3 - int convertStringToInt(string oldOne)
	test = test && test4();//Test 4 - bool leapYear(int y)
	test = test && test5();//Test 5 - bool fullMonth(int m)
	test = test && test6();//Test 6 - int nextMonth(int curr)
	test = test && test7();//Test 7 - int prevMonth(int curr) 
	test = test && test8();//Test 8 - string GetRank(int rank)
	test = test && test9();//Test 9 - String ^ returnCurrentMonth(int m)
	test = test && test10();//Test 10 - string converSpecialStringToString(String ^ oldOne)
	test = test && test11();//Test 11 - String ^ returnYear(int y)
	test = test && test12();//Test 12 - int convertSpecialStringToInt(String ^ oldOne)
	if (test == true) cout << "==================" << endl << "+++ ALL TESTS PASSED WITH SUCCESS! +++" << endl;
}