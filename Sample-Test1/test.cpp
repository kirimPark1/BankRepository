#include "pch.h"
#include "../BankKATA/Bank.cpp"

class AccountFixture : public testing::Test
{
public:
	Account account{ 10000, 5 };
};
TEST_F(AccountFixture, CreateAccountInit10000won) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, Withdraw) {
	account.withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}

TEST_F(AccountFixture, CheckInterest)
{
	EXPECT_EQ(5, account.getInterest());
}

TEST_F(AccountFixture, Interest) {
	account.setInterest(7);
	EXPECT_EQ(11449, account.getBalanceWithInterest(2));
}

