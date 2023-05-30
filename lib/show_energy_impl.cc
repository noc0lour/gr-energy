/* -*- c++ -*- */
/*
 * Copyright 2023 Andrej Rode.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "show_energy_impl.h"
#include <gnuradio/io_signature.h>

namespace gr {
namespace energy {

#pragma message("set the following appropriately and remove this warning")
using input_type = float;
show_energy::sptr show_energy::make()
{
    return gnuradio::make_block_sptr<show_energy_impl>();
}


/*
 * The private constructor
 */
show_energy_impl::show_energy_impl()
    : gr::sync_block("show_energy",
                     gr::io_signature::make(
                         1 /* min inputs */, 1 /* max inputs */, sizeof(input_type)),
                     gr::io_signature::make(0, 0, 0))
{
}

/*
 * Our virtual destructor.
 */
show_energy_impl::~show_energy_impl() {}

int show_energy_impl::work(int noutput_items,
                           gr_vector_const_void_star& input_items,
                           gr_vector_void_star& output_items)
{
    auto in = static_cast<const input_type*>(input_items[0]);

#pragma message("Implement the signal processing in your block and remove this warning")
    // Do <+signal processing+>

    // Tell runtime system how many output items we produced.
    return noutput_items;
}

} /* namespace energy */
} /* namespace gr */
