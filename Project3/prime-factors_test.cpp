#include "gmock/gmock.h"
#include "prime-factors.h"

using namespace std;

class PrimeFixture : public testing::Test
{
public:
    PrimeFactor prime_factor;
    vector<int> expected;
};

TEST_F(PrimeFixture, Of1)
{
    expected = {};
    EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2)
{
    expected = {2};
    EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, Of3)
{
    expected = {3};
    EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, Of4)
{
    expected = {2, 2};
    EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, Of6)
{
    expected = {2, 3};
    EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFixture, Of9)
{
    expected = {3, 3};
    EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFixture, Of12)
{
    expected = {2, 2, 3};
    EXPECT_EQ(expected, prime_factor.of(12));
}

TEST_F(PrimeFixture, Of105)
{
    expected = {3, 5, 7};
    EXPECT_EQ(expected, prime_factor.of(105));
}


int main()
{
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}