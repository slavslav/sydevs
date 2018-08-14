#pragma once
#ifndef SYDEVS_EXAMPLES_REALTIME_H_
#define SYDEVS_EXAMPLES_REALTIME_H_

#include <examples/research/realtime/bouncing_ball_interactive_system.h>
#include <sydevs/systems/real_time_simulation.h>

namespace sydevs_examples {

using namespace sydevs;
using namespace sydevs::systems;


void realtime();

void observation_phase(real_time_simulation<bouncing_ball_interactive_system>& sim, clock_time& clock_t0, duration& t);
void interaction_phase(real_time_simulation<bouncing_ball_interactive_system>& sim, bool& high_g, bool& fast_as_possible, float64& t_syn_rate);

void print_header();
void print_footer();
void print_line(distance x, duration t, clock_time clock_t0, clock_time clock_t);
void print_menu(bool high_g, bool fast_as_possible, float64 t_syn_rate);


}  // namespace

#endif
