// unittesting.cpp : Defines the entry point for the console application.
//

#include "gtest/gtest.h"
#include "SUT.h"

// Given an empty cart, GetSubtotal() should return zero
TEST(ShoppingCartTests, getSubtotal_ReturnsZero_Initially)
{
  SUT sut;

  double actual = sut.GetSubtotal();

  EXPECT_EQ(0, actual);
}

/* Uncomment me after the test before me passes
// After adding item 01 to the cart, the subtotal is $1.99
TEST(ShoppingCartTests, getSubtotal_Returns199_AfterBuying01)
{
  SUT sut;

  sut.AddToCart("01"); // Add an item to the cart with barcode '01'

  double actual = sut.GetSubtotal();

  EXPECT_EQ(1.99, actual);
}
*/

/* Uncomment me after the test before me passes
// After adding item 02 to the cart, the subtotal is $2.49
TEST(ShoppingCartTests, getSubtotal_Returns249_AfterBuying02)
{
SUT sut;

sut.AddToCart("02"); // Add an item to the cart with barcode '02'

double actual = sut.GetSubtotal();

EXPECT_EQ(2.49, actual);
}
*/