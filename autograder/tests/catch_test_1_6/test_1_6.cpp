//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "pagination.h"
using namespace std;

static void test_6() {
    pagination<double> pg1 = {1, 2, 3, 4, 5, 6, 5, 10, 11, 12, 3, 4, 10};
    pg1.page_size(5);
    pg1++;
    // muestra el resultado
    auto vec1 = generate_vector(pg1);
    for (const auto& item: vec1)
        cout << item << " ";	// 6 5 10 11 12
    cout << endl;
}

TEST_CASE("Question #1_6") {
    execute_test("test_1_6.in", test_6);
}