
#ifndef CMDSTAN_ARGUMENTS_ARG_UNCONSTRAINED_LOG_PROBABILITY_HPP
#define CMDSTAN_ARGUMENTS_ARG_UNCONSTRAINED_LOG_PROBABILITY_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

class arg_unconstrained_log_probability : public bool_argument {
 public:
  arg_unconstrained_log_probability() {
    _name = "unconstrained_log_probability";
    _description = "Compute the unconstrained log-probability density.";
    _validity = "{0,1}";
    _default = "0";
    _default_value = true;

  }

};
}  // namespace cmdstan
#endif

