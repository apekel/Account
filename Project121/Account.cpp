class Account
{
public:
	explicit Account(int money)
		: balance(money)
	{}

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

	void setCompountInterest(int compountInterest)
	{
		balance *= (1 + (compountInterest) / 100.);
	}

	void setCompountInterestWithYear(int compountInterest, int year)
	{
		for (int i = 0; i < year; i++)
		{
			balance *= (1 + (compountInterest) / 100.);
		}
	}
private:
	int balance = 10000;
};