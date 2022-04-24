//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "pagination.h"
using namespace std;

static void test_5() {
    pagination<int> pg1 = {1, 2, 3, 4, 5, 6, 5, 10, 11, 12, 14};
    pg1.page_size(4);
    pg1.back();
    cout << pg1 << endl;
    pg1.front();
    cout << pg1 << endl;
}

TEST_CASE("Question #1_5") {
    execute_test("test_1_5.in", test_5);
}