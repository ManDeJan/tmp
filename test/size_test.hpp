#include "test_util.hpp"

namespace size_test {

    int run() {
        using rhs = make_sequence_<identity_, size_<>>;
        call_<make_sequence_<>, extent>{} = call_<make_sequence_<make_algo<rhs>>, extent>{};

        return 0;
    }

}
