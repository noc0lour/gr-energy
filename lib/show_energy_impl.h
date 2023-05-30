/* -*- c++ -*- */
/*
 * Copyright 2023 Andrej Rode.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_ENERGY_SHOW_ENERGY_IMPL_H
#define INCLUDED_ENERGY_SHOW_ENERGY_IMPL_H

#include <gnuradio/energy/show_energy.h>

namespace gr {
namespace energy {

class show_energy_impl : public show_energy
{
private:
    // Nothing to declare in this block.

public:
    show_energy_impl();
    ~show_energy_impl();

    // Where all the action really happens
    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items);
};

} // namespace energy
} // namespace gr

#endif /* INCLUDED_ENERGY_SHOW_ENERGY_IMPL_H */
