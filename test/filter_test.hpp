#include "../include/boost/tmp/algorithm/filter.hpp"
#include "../include/boost/tmp/is.hpp"
#include "../include/boost/tmp/pack.hpp"
#include "../include/boost/tmp/fusion.hpp"

namespace filter_test {
    using namespace boost::tmp;

    template<typename T>
    using is_even = tmp::bool_<(T::value % 2 == 0)>;
    int run() {
        list_<int,int>{} = call_<filter_<is_<int>>,bool,char,int,int,bool>{};



        //fusion
        std::pair<int,int>{} = pack_(false,'a',1,2,true) >>= filter_<is_<int>>{} | [](auto l, auto r){ return std::make_pair(l,r);};
        int{} = pack_(false,'a',1,true) >>= filter_<is_<int>>{} | [](auto l){ return l; };
        pack_() = pack_() >>= filter_<lift_<is_even>>{};
        
        return 0;
    }
}