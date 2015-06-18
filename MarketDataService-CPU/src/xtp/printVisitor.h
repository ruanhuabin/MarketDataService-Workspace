#ifndef PRINTVISITOR_H_BINUYFOC
#define PRINTVISITOR_H_BINUYFOC

#include <boost/fusion/adapted/struct/adapt_struct.hpp>
#include <boost/fusion/include/adapt_struct.hpp>
#include <boost/fusion/algorithm.hpp>
#include <boost/fusion/mpl.hpp>
#include <boost/mpl/for_each.hpp>
#include <boost/mpl/range_c.hpp>
#include <boost/bind.hpp>
#include <iostream>

#include "logger.h"

struct print_field_items
{
    template<class Index, class C>
    void operator()(Index, C & c)
    {

        std::cout << boost::fusion::extension::struct_member_name<C, Index::value>::call()
                  << "="
                  << boost::fusion::at<Index>(c)
                  << std::endl;
    }
};


template<class C>
void print_visitor_name_value(C & c)
{
    typedef boost::mpl::range_c<int,0, boost::fusion::result_of::size<C>::type::value> range;
    boost::mpl::for_each<range>(boost::bind<void>(print_field_items(), _1, boost::ref(c)));
}


struct print_visitor {
  template <typename T> void operator()(const T &value) const {
    DEBUG() << "[" << value << "]";
  }
};

template <> inline void print_visitor::operator()(const char &value) const {
  DEBUG() << format("char in dec [%u]") % (unsigned int)value;
}

#endif /* end of include guard: PRINTVISITOR_H_BINUYFOC */
