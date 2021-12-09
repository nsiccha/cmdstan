
#ifndef CMDSTAN_ARGUMENTS_ARG_TRANSFORMED_PARAMETERS_HPP
#define CMDSTAN_ARGUMENTS_ARG_TRANSFORMED_PARAMETERS_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

class arg_transformed_parameters : public bool_argument {
 public:
  arg_transformed_parameters() {
    _name = "transformed_parameters";
    _description = "Compute transformed parameters.";
    _validity = "{0,1}";
    _default = "0";
    _default_value = true;

  }

};
}  // namespace cmdstan
#endif

