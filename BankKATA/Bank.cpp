class Account
{
public:
	explicit Account(int money, int percentage)
		: balance(money), interest(percentage)
	{
	}

	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int money)
	{
		balance -= money;
	}

	int getBalanceWithInterest(int year)
	{
		int result = balance;
		double intersetForYear = 1 + (static_cast<double>(getInterest()) / 100.0);
		for (int i = 0; i < year; i++)
		{
			result *= intersetForYear;
		}
		return result;
	}

	void setInterest(int Percentage)
	{
		interest = Percentage;
	}
	int getInterest()
	{
		return interest;
	}

private:
	int balance;
	int interest;
};
