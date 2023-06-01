#include "pch.h"
#include "../Project121/Cal.cpp"

class AccountFixture : public testing::Test
{
public:
	Account account{ 10000 };
};
TEST_F(AccountFixture, CreateAccountInit10000won) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, WithDraw) {
	account.withdraw(400);
	EXPECT_EQ(9600, account.getBalance());
}
