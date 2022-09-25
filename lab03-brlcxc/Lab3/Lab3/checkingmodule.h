using namespace std;

void Deposit(float& account, float amount);
char MainMenu();
float GetValue(string userString);
float GetValue(string display, int upperLimit);
float GetInterestRate(int creditScore);
void Withdraw(float& userBalance, float withdrawAmount);
int GetLoanMonths();
int GetCreditRating();
float CalculateLoanAmount(int principal, float interestRate, int numMonths);
void OutputAccount(float amount); 