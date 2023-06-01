#include "pch.h"
#include "../Project121/Account.cpp"

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

TEST_F(AccountFixture, CompountInterest) {
	account.setCompountInterest(5);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, CompountInterestWithYear) {
	account.setCompountInterestWithYear(5, 3);
	EXPECT_EQ(11576, account.getBalance());
}