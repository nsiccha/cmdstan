
#ifndef CMDSTAN_ARGUMENTS_ARG_OUTPUT_PATH_HPP
#define CMDSTAN_ARGUMENTS_ARG_OUTPUT_PATH_HPP

#include <cmdstan/arguments/singleton_argument.hpp>

namespace cmdstan {

class arg_output_path : public string_argument {
 public:
  arg_output_path() {
    _name = "output_path";
    _description = "(Binary) output file of computed values.";
    _validity = "Writeable path";

  }

};
}  // namespace cmdstan
#endif

