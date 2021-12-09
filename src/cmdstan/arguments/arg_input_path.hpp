
#ifndef CMDSTAN_ARGUMENTS_ARG_INPUT_PATH_HPP
#define CMDSTAN_ARGUMENTS_ARG_INPUT_PATH_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

class arg_input_path : public string_argument {
 public:
  arg_input_path() {
    _name = "input_path";
    _description = "(Binary) input file of (constrained) parameter values.";
    _validity = "Path to existing file";

  }

};
}  // namespace cmdstan
#endif

