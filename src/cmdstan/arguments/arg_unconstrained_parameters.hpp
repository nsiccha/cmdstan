
#ifndef CMDSTAN_ARGUMENTS_ARG_UNCONSTRAINED_PARAMETERS_HPP
#define CMDSTAN_ARGUMENTS_ARG_UNCONSTRAINED_PARAMETERS_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

class arg_unconstrained_parameters : public bool_argument {
 public:
  arg_unconstrained_parameters() {
    _name = "unconstrained_parameters";
    _description = "Compute unconstrained parameter values.";
    _validity = "{0,1}";
    _default = "0";
    _default_value = true;

  }

};
}  // namespace cmdstan
#endif

