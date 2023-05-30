/* -*- c++ -*- */
/*
 * Copyright 2023 Andrej Rode.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_ENERGY_SHOW_ENERGY_H
#define INCLUDED_ENERGY_SHOW_ENERGY_H

#include <gnuradio/energy/api.h>
#include <gnuradio/sync_block.h>
#include <QWidget>

namespace gr {
namespace energy {

/*!
 * \brief <+description of block+>
 * \ingroup energy
 *
 */
class ENERGY_API show_energy : virtual public gr::sync_block
{
public:
    typedef std::shared_ptr<show_energy> sptr;

    /*!
     * \brief Return a shared_ptr to a new instance of energy::show_energy.
     *
     * To avoid accidental use of raw pointers, energy::show_energy's
     * constructor is in a private implementation
     * class. energy::show_energy::make is the public interface for
     * creating new instances.
     */
    static sptr make();
};

} // namespace energy
} // namespace gr

#endif /* INCLUDED_ENERGY_SHOW_ENERGY_H */
