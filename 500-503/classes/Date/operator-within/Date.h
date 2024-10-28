#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
	int year;
	int month;
	int day;

  bool validDay(int day);
  bool validMonth(int month);
  bool validYear(int year);

public:
  Date();
  Date(int year, int month, int day);
	std::string to_string();
	int getDay();
	void setDay(int day);
	int getMonth();
	void setMonth(int month);
	int getYear();
	void setYear(int year);
  // add == declaration
  bool operator==(const Date& rhs);

  // add < declaration
  bool operator<(const Date& rhs);
  // rhs right hand side     lhs left hand side
};

#endif