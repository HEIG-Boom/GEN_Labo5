//
// Created by luc on 29.05.19.
//

#include "gtest/gtest.h"
#include <Customer.h>

TEST(ExampleTest, simple) {
   // Code
   Customer cust("Violette");

   ASSERT_EQ(cust.getName(), "Violette");
}