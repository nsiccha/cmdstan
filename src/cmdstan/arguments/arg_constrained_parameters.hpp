
#ifndef CMDSTAN_ARGUMENTS_ARG_CONSTRAINED_PARAMETERS_HPP
#define CMDSTAN_ARGUMENTS_ARG_CONSTRAINED_PARAMETERS_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

class arg_constrained_parameters : public bool_argument {
 public:
  arg_constrained_parameters() {
    _name = "constrained_parameters";
    _description = "Compute constrained parameter values.";
    _validity = "{0,1}";
    _default = "0";
    _default_value = true;

  }

};
}  // namespace cmdstan
#endif

