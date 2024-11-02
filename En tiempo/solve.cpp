#include <iostream>

using namespace std;

struct Time {

public:
	unsigned long long days;
	unsigned long long hours;
	unsigned long long minutes;

private:
	unsigned long long Total_min;

public:
	void Convert_ToMin() {
			Total_min = days * 1440 + hours * 60 + minutes;
	}

	int operator-(const Time& other) const {
		return other.Total_min - Total_min;
	}

	 bool operator>(const Time& other) const {
		 if (Total_min > other.Total_min)
			 return 1;
		 else
			 return 0;
	}

};


int main() {
	Time date1, date2;
	cin >> date1.days >> date1.hours >> date1.minutes;
	cin >> date2.days >> date2.hours >> date2.minutes;
	date1.Convert_ToMin();
	date2.Convert_ToMin();
	if (date1 > date2)
		cout << date2 - date1;
	else
		cout << date1 - date2;
}