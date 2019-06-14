//
// Created by luc on 29.05.19.
//

#include "gtest/gtest.h"
#include "../src/Customer.h"

// Integration test for the Customer.statement() member function
TEST(ExampleTest, simple) {
   Customer cust("Violette");

   cust.addRental(Rental(Movie("Borat"), 4));

   ASSERT_EQ(cust.statement(), "Rental Record for Violette\n\tBorat\t5\nAmount owed is 5\nYou earned 1 frequent renter points");
}