//
// Created by Neo Ko on 16/4/3.
//

#include "gtest/gtest.h"
#include "solution/NimGame.h"

TEST(NimGameTestCase, test_solution)
{
    NimGame* solution = new NimGame();
    bool result1 = solution->canWinNim(4);
    bool result2 = solution->canWinNim(5);
    bool result3 = solution->canWinNim(6);
    bool result4 = solution->canWinNim(7);
    bool result5 = solution->canWinNim(8);
    EXPECT_EQ(result1, false);
    EXPECT_EQ(result2, true);
    EXPECT_EQ(result3, true);
    EXPECT_EQ(result4, true);
    EXPECT_EQ(result5, false);
}
