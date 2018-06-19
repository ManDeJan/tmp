#ifndef BOOST_TMP_JOIN_HPP_INCLUDED
#define BOOST_TMP_JOIN_HPP_INCLUDED

//  Copyright 2018 Odin Holmes.
//
//  Distributed under the Boost Software License, Version 1.0.
//
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt

#include "../detail/dispatch.hpp"

namespace boost{
    namespace tmp{
		template <typename C = listify_>
		struct join_ {};
		namespace detail{
		    template<typename = list_<>,typename = list_<>,typename = list_<>,typename = list_<>,typename = list_<>,typename = list_<>,typename = list_<>,typename = list_<>>
		    struct join_impl8;
            template<template<typename...> class L0,
                    template<typename...> class L1,
                    template<typename...> class L2,
                    template<typename...> class L3,
                    template<typename...> class L4,
                    template<typename...> class L5,
                    template<typename...> class L6,
                    template<typename...> class L7, typename...T0s, typename...T1s, typename...T2s, typename...T3s,
                    typename...T4s, typename...T5s, typename...T6s, typename...T7s>
            struct join_impl8<L0<T0s...>,L1<T1s...>,L2<T2s...>,L3<T3s...>,L4<T4s...>,L5<T5s...>,L6<T6s...>,L7<T7s...>>{
                template<typename C>
                using f = typename dispatch<find_dispatch(sizeof...(T0s)+
                        sizeof...(T1s)+sizeof...(T2s)+sizeof...(T3s)+sizeof...(T4s)+sizeof...(T5s)+sizeof...(T6s)+sizeof...(T7s)),
                        C>::template f<T0s...,T1s...,T2s...,T3s...,T4s...,T5s...,T6s...,T7s...>;
            };
			template<typename C>
			struct dispatch<1,join_<C>>{
				template <typename T>
				using f = typename join_impl8<T>::template f<C>;
			};
			template<typename C>
			struct dispatch<2,join_<C>>{
				template <typename T0, typename T1>
				using f = typename join_impl8<T0, T1>::template f<C>;
			};
			template<typename C>
			struct dispatch<3,join_<C>>{
                template <typename T0, typename T1, typename T2>
                using f = typename join_impl8<T0, T1, T2>::template f<C>;
			};
            template<typename C>
            struct dispatch<4,join_<C>>{
                template <typename T0, typename T1, typename T2, typename T3>
                using f = typename join_impl8<T0, T1, T2, T3>::template f<C>;
            };
			template<typename C>
			struct dispatch<5,join_<C>>{
                template <typename T0, typename T1, typename T2, typename T3,typename T4=list_<>, typename T5=list_<>, typename T6=list_<>, typename T7=list_<>>
				using f = typename join_impl8<T0, T1, T2, T3, T4, T5, T6, T7>::template f<C>;
			};
			template<typename C>
			struct dispatch<8,join_<C>>:dispatch<5,join_<C>>{};

			template<typename C>
			struct dispatch<9,join_<C>>{
				template <typename T0, typename T1, typename T2, typename T3,typename T4, typename T5, typename T6, typename T7, typename...Ts>
				using f = typename dispatch<find_dispatch(sizeof...(Ts)+1),join_<C>>::template f<Ts..., typename join_impl8<T0, T1, T2, T3, T4, T5, T6, T7>::template f<listify_>>;
			};

			template<unsigned N, typename C>
			struct dispatch<N,join_<C>>:dispatch<9,join_<C>>{};
		}
    }
}

#endif

