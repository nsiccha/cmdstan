
#ifndef CMDSTAN_ARGUMENTS_ARG_GENERATED_QUANTITIES_HPP
#define CMDSTAN_ARGUMENTS_ARG_GENERATED_QUANTITIES_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

class arg_generated_quantities : public bool_argument {
 public:
  arg_generated_quantities() {
    _name = "generated_quantities";
    _description = "Compute generated quantities.";
    _validity = "{0,1}";
    _default = "0";
    _default_value = true;

  }

};
}  // namespace cmdstan
#endif

