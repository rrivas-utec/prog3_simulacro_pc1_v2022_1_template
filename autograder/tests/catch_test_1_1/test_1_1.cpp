//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "pagination.h"
using namespace std;

static void test_1() {
    pagination<int> pg1 = {1, 2, 3, 4, 5, 6, 5, 10, 11, 12, 14};
    cout << pg1 << endl;
}

TEST_CASE("Question #1_1") {
    execute_test("test_1_1.in", test_1);
}