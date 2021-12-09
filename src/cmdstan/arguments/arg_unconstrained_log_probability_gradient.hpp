
#ifndef CMDSTAN_ARGUMENTS_ARG_UNCONSTRAINED_LOG_PROBABILITY_GRADIENT_HPP
#define CMDSTAN_ARGUMENTS_ARG_UNCONSTRAINED_LOG_PROBABILITY_GRADIENT_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

class arg_unconstrained_log_probability_gradient : public bool_argument {
 public:
  arg_unconstrained_log_probability_gradient() {
    _name = "unconstrained_log_probability_gradient";
    _description = "Compute the gradient of the unconstrained log-probability density.";
    _validity = "{0,1}";
    _default = "0";
    _default_value = true;

  }

};
}  // namespace cmdstan
#endif

