// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fastball
Rcpp::List fastball(Rcpp::List inputDf, Rcpp::NumericVector dim);
RcppExport SEXP _backbone_fastball(SEXP inputDfSEXP, SEXP dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type inputDf(inputDfSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dim(dimSEXP);
    rcpp_result_gen = Rcpp::wrap(fastball(inputDf, dim));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_backbone_fastball", (DL_FUNC) &_backbone_fastball, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_backbone(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
