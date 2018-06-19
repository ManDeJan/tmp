#include "../include/boost/tmp/sequence/join.hpp"
#include "../include/boost/tmp/call.hpp"


namespace join_test {
    using namespace boost::tmp;

    template<int, int> struct x;

    using li = list_<x<1, 0>, x<1, 1>, x<1, 2>, x<1, 3>, x<1, 4>, x<1, 5>, x<1, 6>, x<1, 7>, x<1, 8>, x<1, 9>>;

    int run() {
        using g1 = call_<join_<>, li>;
        using g2 = call_<join_<>, li, li>;
        using g3 = call_<join_<>, li, li, li>;
        using g4 = call_<join_<>, li, li, li, li>;
        using g5 = call_<join_<>, li, li, li, li, li>;
        using g6 = call_<join_<>, li, li, li, li, li, li, li>;
        using g7 = call_<join_<>, li, li, li, li, li, li, li, li>;
        using g8 = call_<join_<>, li, li, li, li, li, li, li, li, li>;
        using g9 = call_<join_<>, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li>;
        using g10 = call_<join_<>, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li>;
        using g11 = call_<join_<>, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li>;
        using g12 = call_<join_<>, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li>;
        using g13 = call_<join_<>, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li>;
        using g14 = call_<join_<>, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li, li>;
        return 0;
    }
}