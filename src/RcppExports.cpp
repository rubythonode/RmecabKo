// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// posRcpp
List posRcpp(const List& phrase_list, const StringVector& dic);
RcppExport SEXP RmecabKo_posRcpp(SEXP phraseSEXP, SEXP dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type phrase(phraseSEXP);
    Rcpp::traits::input_parameter< const StringVector& >::type dic(dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posRcpp(phrase, dic));
    return rcpp_result_gen;
END_RCPP
}
