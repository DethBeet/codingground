#include <iostream>
#include <string>

using namespace std;

int main()
{ 
   
   //All integrals and doubles and strings and shit.
   int Balance;
   double Deposit;
   double Withdrawal;
   int workPayIT = 400;
   int workPayIndustry = 300;
   int workPayOffice = 200;
   int workPayOther = 280;
   double monthsWorked;
   double Pay;
   double workTimeHours;
   double workTimeDays;
   double workTimeWeeks;
   double workTimeYears;
   double workTime;
   int lifeEarningsWithTaxOff;
   int lifeEarnings;
   double Outcome;
   double outComeAYear;
   int outComeLife;
   double Tax = 0.75;
   double workTimeMonthsLife;
   double workTimeMonthsYear;
   string Job;
   string withdrawalAnswer;
  
   //Workchoice.
   cout << "What is your occupation? (IT, industry, office or other)\n";
   cin >> Job;
   cout << endl;
   if (Job == "IT"){
       Pay = workPayIT;
   }
   else if (Job == "industry"){
       Pay = workPayIndustry;
   }
   else if (Job == "office"){
       Pay = workPayOffice;
   }
   else if (Job == "other"){
       Pay = workPayOther;
   }
  
   //Start of money estimation estimating.
   cout << "Hello and welcome to my money estimation service for worried adults!\n";
   cout << "Please enter your current account balance: ";
   cin >> Balance;
   cout << endl;
   cout << "Please enter the ammount of hours worked during one working day: ";
   cin >> workTimeHours;
   cout << endl;
   cout << "Please enter the ammount of days worked during one week: ";
   cin >> workTimeDays;
   cout << endl;
   cout << "Please enter the ammount of weeks worked during one year: ";
   cin >> workTimeWeeks;
   cout << endl;
   cout << "Please enter the ammount of years worked in your current occupation in your lifetime: ";
   cin >> workTimeYears;
   cout << endl;
  
   workTime = workTimeHours * workTimeDays * workTimeWeeks * workTimeYears;
   lifeEarnings = Pay * workTime;
   lifeEarningsWithTaxOff = lifeEarnings * Tax;
  
   cout << "You have earned a total of: " << lifeEarnings << " working with your current occupation\n";
   cout << "With tax deducted that is approximately: " << lifeEarningsWithTaxOff << " earned.\n";
  
   workTimeMonthsYear = workTimeWeeks / 4;
   workTimeMonthsLife = workTimeYears * (workTimeWeeks / 4);
  
   cout << "Please enter your approximate money outcome: ";
   cin >> Outcome;

   outComeAYear = Outcome * workTimeMonthsYear;
   outComeLife = outComeAYear * workTimeYears;
  
   cout << "Then your outcome in " << workTimeYears << " years should be " << outComeLife << endl;
  
   cout << endl;
  
   Balance = lifeEarningsWithTaxOff - outComeLife;
  
   cout << "Then your approximate balance should be around: " << Balance;
   cout << endl;
  
   //Withdrawal case
   cout << "Would you like to make a withdrawal? Type yes in that case.\n";
   cin >> withdrawalAnswer;
   cout << endl;
  
   if (withdrawalAnswer == "yes"){
       cout << "How much would you like to withdraw? Specify bellow followed by enter\n";
       cin >> Withdrawal;
       cout << endl;
      
       Balance = Balance - Withdrawal;
      
       cout << "Your balance is now: " << Balance << endl;
   }
   else if (withdrawalAnswer == "no") {
       cout << "Too bad, fuck off.\n";
   }

   return 0;
}
