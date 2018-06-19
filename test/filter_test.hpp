#include "../include/boost/tmp/algorithm/filter.hpp"
#include "../include/boost/tmp/is.hpp"
#include "../include/boost/tmp/pack.hpp"
#include "../include/boost/tmp/fusion.hpp"

namespace tmp = boost::tmp;
namespace filter_test {
    using namespace boost::tmp;

    template<typename T>
    using is_even = tmp::bool_<(T::value % 2 == 0)>;
    int run() {
        list_<int,int> t1 = call_<filter_<is_<int>>,bool,char,int,int,bool>{};
        std::pair<int,int> t2 = pack_(false,'a',1,2,true) >>= filter_<is_<int>>{} | [](auto l, auto r){ return std::make_pair(l,r);};
        int t3 = pack_(false,'a',1,true) >>= filter_<is_<int>>{} | [](auto l){ return l; };
        auto t4 = pack_() >>= filter_<lift_<is_even>>{};




            constexpr auto xs0 = tmp::pack_(

            );

            constexpr auto result0 = xs0 >>= tmp::filter_<lift_<is_even>>{};


            constexpr auto xs1 = tmp::pack_(

            );

            constexpr auto result1 = xs1 >>= tmp::filter_<lift_<is_even>>{};


        return 0;
    }
}