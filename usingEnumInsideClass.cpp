#include<iostream>
using namespace std;

class Year{
public:
    enum Month{Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    void setMonth(Month month){
        currentMonth = month;
    }
    Month getMonth(){
        return currentMonth;
    }
    string getMonthString(Month month){
        switch(month){
            case Jan: return "January";
            case Feb: return "February";
            case Mar: return "March";
            case Apr: return "April";
            case May: return "May";
            case Jun: return "June";
            case Jul: return "July";
            case Aug: return "August";
            case Sep: return "September";
            case Oct: return "October";
            case Nov: return "November";
            case Dec: return "December";
            default: return "Invalid Month";
        }
    }
    private:
    Month currentMonth;
};
int main(){
    Year year;
    int month;
    cin>>month;
    if(month >= 1 && month <= 12){
        Year::Month selectedMonth = static_cast<Year::Month>(month - 1);
        year.setMonth(selectedMonth);
        cout<<"Month: "<<year.getMonthString(year.getMonth())<<endl;
    }else{
        cout<<"Invalid Month Entered"<<endl;
    }
    return 0;
}
