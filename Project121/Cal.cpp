class Account
{
public:
	explicit Account(int balance)
		: balance(balance)
	{}

	int getBalance()
	{
		return balance;
	}

	void deposit(int i)
	{
		balance += i;
	}

	void withdraw(int i)
	{
		balance -= i;
	}

private:
	int balance = 10000;
};