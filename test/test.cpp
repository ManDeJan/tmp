#include "filter_test.hpp"
#include "fold_left_test.hpp"
#include "join_test.hpp"
#include "size_test.hpp"
#include "transform_test.hpp"
#include "zip_with_index_test.hpp"

//#include "../include/boost/tmp.hpp"

int main() {
    return fold_left_test::run()      ||
	       join_test::run()           ||
           size_test::run()           ||
           transform_test::run()      ||
	       zip_with_index_test::run();

}
