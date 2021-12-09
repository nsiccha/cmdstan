
#ifndef CMDSTAN_ARGUMENTS_ARG_COMPUTE_HPP
#define CMDSTAN_ARGUMENTS_ARG_COMPUTE_HPP

#include <cmdstan/arguments/categorical_argument.hpp>
#include <cmdstan/arguments/arg_output_path.hpp>
#include <cmdstan/arguments/arg_input_unconstrained.hpp>
#include <cmdstan/arguments/arg_transformed_parameters.hpp>
#include <cmdstan/arguments/arg_unconstrained_log_probability_gradient.hpp>
#include <cmdstan/arguments/arg_unconstrained_log_probability.hpp>
#include <cmdstan/arguments/arg_constrained_parameters.hpp>
#include <cmdstan/arguments/arg_input_path.hpp>
#include <cmdstan/arguments/arg_constrained_log_probability_gradient.hpp>
#include <cmdstan/arguments/arg_constrained_log_probability.hpp>
#include <cmdstan/arguments/arg_unconstrained_parameters.hpp>
#include <cmdstan/arguments/arg_generated_quantities.hpp>

namespace cmdstan {

class arg_compute : public categorical_argument {
 public:
  arg_compute() {
    _name = "compute";
    _description = "(Re)compute various quantities.";
    _subarguments.push_back(new arg_input_path());
    _subarguments.push_back(new arg_input_unconstrained());
    _subarguments.push_back(new arg_output_path());
    _subarguments.push_back(new arg_unconstrained_parameters());
    _subarguments.push_back(new arg_constrained_parameters());
    _subarguments.push_back(new arg_transformed_parameters());
    _subarguments.push_back(new arg_generated_quantities());
    _subarguments.push_back(new arg_constrained_log_probability());
    _subarguments.push_back(new arg_constrained_log_probability_gradient());
    _subarguments.push_back(new arg_unconstrained_log_probability());
    _subarguments.push_back(new arg_unconstrained_log_probability_gradient());
  }

std::string input_path() {
    return dynamic_cast<arg_input_path *>(this->arg("input_path"))->value();
};

bool input_unconstrained() {
    return dynamic_cast<arg_input_unconstrained *>(this->arg("input_unconstrained"))->value();
};

std::string output_path() {
    return dynamic_cast<arg_output_path *>(this->arg("output_path"))->value();
};

bool unconstrained_parameters() {
    return dynamic_cast<arg_unconstrained_parameters *>(this->arg("unconstrained_parameters"))->value();
};

bool constrained_parameters() {
    return dynamic_cast<arg_constrained_parameters *>(this->arg("constrained_parameters"))->value();
};

bool transformed_parameters() {
    return dynamic_cast<arg_transformed_parameters *>(this->arg("transformed_parameters"))->value();
};

bool generated_quantities() {
    return dynamic_cast<arg_generated_quantities *>(this->arg("generated_quantities"))->value();
};

bool constrained_log_probability() {
    return dynamic_cast<arg_constrained_log_probability *>(this->arg("constrained_log_probability"))->value();
};

bool constrained_log_probability_gradient() {
    return dynamic_cast<arg_constrained_log_probability_gradient *>(this->arg("constrained_log_probability_gradient"))->value();
};

bool unconstrained_log_probability() {
    return dynamic_cast<arg_unconstrained_log_probability *>(this->arg("unconstrained_log_probability"))->value();
};

bool unconstrained_log_probability_gradient() {
    return dynamic_cast<arg_unconstrained_log_probability_gradient *>(this->arg("unconstrained_log_probability_gradient"))->value();
};
};
}  // namespace cmdstan
#endif

