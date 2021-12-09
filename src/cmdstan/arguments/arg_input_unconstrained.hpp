
#ifndef CMDSTAN_ARGUMENTS_ARG_INPUT_UNCONSTRAINED_HPP
#define CMDSTAN_ARGUMENTS_ARG_INPUT_UNCONSTRAINED_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

class arg_input_unconstrained : public bool_argument {
 public:
  arg_input_unconstrained() {
    _name = "input_unconstrained";
    _description = "Input is already unconstrained.";
    _validity = "{0,1}";
    _default = "0";
    _default_value = true;

  }

};
}  // namespace cmdstan
#endif

