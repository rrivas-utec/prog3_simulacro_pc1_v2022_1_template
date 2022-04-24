//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "pagination.h"
using namespace std;

static void test_4() {
    pagination<int> pg1 = {1, 2, 3, 4, 5, 6, 5, 10, 11, 12, 14};
    pg1.page_size(4);
    pg1++;
    pg1++;
    cout << pg1 << endl;
    cout << pg1.current_page() << "|" << pg1.pages() << endl;
}

TEST_CASE("Question #1_4") {
    execute_test("test_1_4.in", test_4);
}