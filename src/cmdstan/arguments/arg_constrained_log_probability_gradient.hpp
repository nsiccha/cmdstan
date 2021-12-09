
#ifndef CMDSTAN_ARGUMENTS_ARG_CONSTRAINED_LOG_PROBABILITY_GRADIENT_HPP
#define CMDSTAN_ARGUMENTS_ARG_CONSTRAINED_LOG_PROBABILITY_GRADIENT_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

class arg_constrained_log_probability_gradient : public bool_argument {
 public:
  arg_constrained_log_probability_gradient() {
    _name = "constrained_log_probability_gradient";
    _description = "Compute the gradient of the constrained log-probability density.";
    _validity = "{0,1}";
    _default = "0";
    _default_value = true;

  }

};
}  // namespace cmdstan
#endif

