// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// BigColSums2
NumericVector BigColSums2(SEXP X_);
RcppExport SEXP _PUlasso_BigColSums2(SEXP X_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type X_(X_SEXP);
    rcpp_result_gen = Rcpp::wrap(BigColSums2(X_));
    return rcpp_result_gen;
END_RCPP
}
// LU_cpp
Rcpp::List LU_cpp(SEXP& X_, Eigen::VectorXd& z_, Eigen::VectorXd& icoef_, Eigen::ArrayXd& gsize_, Eigen::ArrayXd& pen_, Eigen::ArrayXd& lambdaseq_, bool user_lambdaseq_, int pathLength_, double lambdaMinRatio_, double pi_, int maxit_, double tol_, double inner_tol_, bool useStrongSet_, bool isSparse, bool verbose_);
RcppExport SEXP _PUlasso_LU_cpp(SEXP X_SEXP, SEXP z_SEXP, SEXP icoef_SEXP, SEXP gsize_SEXP, SEXP pen_SEXP, SEXP lambdaseq_SEXP, SEXP user_lambdaseq_SEXP, SEXP pathLength_SEXP, SEXP lambdaMinRatio_SEXP, SEXP pi_SEXP, SEXP maxit_SEXP, SEXP tol_SEXP, SEXP inner_tol_SEXP, SEXP useStrongSet_SEXP, SEXP isSparseSEXP, SEXP verbose_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP& >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type z_(z_SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type icoef_(icoef_SEXP);
    Rcpp::traits::input_parameter< Eigen::ArrayXd& >::type gsize_(gsize_SEXP);
    Rcpp::traits::input_parameter< Eigen::ArrayXd& >::type pen_(pen_SEXP);
    Rcpp::traits::input_parameter< Eigen::ArrayXd& >::type lambdaseq_(lambdaseq_SEXP);
    Rcpp::traits::input_parameter< bool >::type user_lambdaseq_(user_lambdaseq_SEXP);
    Rcpp::traits::input_parameter< int >::type pathLength_(pathLength_SEXP);
    Rcpp::traits::input_parameter< double >::type lambdaMinRatio_(lambdaMinRatio_SEXP);
    Rcpp::traits::input_parameter< double >::type pi_(pi_SEXP);
    Rcpp::traits::input_parameter< int >::type maxit_(maxit_SEXP);
    Rcpp::traits::input_parameter< double >::type tol_(tol_SEXP);
    Rcpp::traits::input_parameter< double >::type inner_tol_(inner_tol_SEXP);
    Rcpp::traits::input_parameter< bool >::type useStrongSet_(useStrongSet_SEXP);
    Rcpp::traits::input_parameter< bool >::type isSparse(isSparseSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose_(verbose_SEXP);
    rcpp_result_gen = Rcpp::wrap(LU_cpp(X_, z_, icoef_, gsize_, pen_, lambdaseq_, user_lambdaseq_, pathLength_, lambdaMinRatio_, pi_, maxit_, tol_, inner_tol_, useStrongSet_, isSparse, verbose_));
    return rcpp_result_gen;
END_RCPP
}
// cv_LU_cpp
Rcpp::List cv_LU_cpp(SEXP& X_, Eigen::VectorXd& z_, Eigen::VectorXd& icoef_, Eigen::ArrayXd& gsize_, Eigen::ArrayXd& pen_, Eigen::ArrayXd& lambdaseq_, bool user_lambdaseq_, int pathLength_, double lambdaMinRatio_, double pi_, int maxit_, double tol_, double inner_tol_, bool useStrongSet_, bool isSparse, bool verbose_, int nfolds_, int nfits_, int ncores_);
RcppExport SEXP _PUlasso_cv_LU_cpp(SEXP X_SEXP, SEXP z_SEXP, SEXP icoef_SEXP, SEXP gsize_SEXP, SEXP pen_SEXP, SEXP lambdaseq_SEXP, SEXP user_lambdaseq_SEXP, SEXP pathLength_SEXP, SEXP lambdaMinRatio_SEXP, SEXP pi_SEXP, SEXP maxit_SEXP, SEXP tol_SEXP, SEXP inner_tol_SEXP, SEXP useStrongSet_SEXP, SEXP isSparseSEXP, SEXP verbose_SEXP, SEXP nfolds_SEXP, SEXP nfits_SEXP, SEXP ncores_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP& >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type z_(z_SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type icoef_(icoef_SEXP);
    Rcpp::traits::input_parameter< Eigen::ArrayXd& >::type gsize_(gsize_SEXP);
    Rcpp::traits::input_parameter< Eigen::ArrayXd& >::type pen_(pen_SEXP);
    Rcpp::traits::input_parameter< Eigen::ArrayXd& >::type lambdaseq_(lambdaseq_SEXP);
    Rcpp::traits::input_parameter< bool >::type user_lambdaseq_(user_lambdaseq_SEXP);
    Rcpp::traits::input_parameter< int >::type pathLength_(pathLength_SEXP);
    Rcpp::traits::input_parameter< double >::type lambdaMinRatio_(lambdaMinRatio_SEXP);
    Rcpp::traits::input_parameter< double >::type pi_(pi_SEXP);
    Rcpp::traits::input_parameter< int >::type maxit_(maxit_SEXP);
    Rcpp::traits::input_parameter< double >::type tol_(tol_SEXP);
    Rcpp::traits::input_parameter< double >::type inner_tol_(inner_tol_SEXP);
    Rcpp::traits::input_parameter< bool >::type useStrongSet_(useStrongSet_SEXP);
    Rcpp::traits::input_parameter< bool >::type isSparse(isSparseSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< int >::type nfolds_(nfolds_SEXP);
    Rcpp::traits::input_parameter< int >::type nfits_(nfits_SEXP);
    Rcpp::traits::input_parameter< int >::type ncores_(ncores_SEXP);
    rcpp_result_gen = Rcpp::wrap(cv_LU_cpp(X_, z_, icoef_, gsize_, pen_, lambdaseq_, user_lambdaseq_, pathLength_, lambdaMinRatio_, pi_, maxit_, tol_, inner_tol_, useStrongSet_, isSparse, verbose_, nfolds_, nfits_, ncores_));
    return rcpp_result_gen;
END_RCPP
}
// LU_big_cpp
Rcpp::List LU_big_cpp(SEXP& X_, Eigen::VectorXd& z_, Eigen::VectorXd& icoef_, Eigen::ArrayXd& gsize_, Eigen::ArrayXd& pen_, Eigen::ArrayXd& lambdaseq_, bool user_lambdaseq_, int pathLength_, double lambdaMinRatio_, double pi_, int maxit_, double tol_, double inner_tol_, bool useStrongSet_, bool verbose_);
RcppExport SEXP _PUlasso_LU_big_cpp(SEXP X_SEXP, SEXP z_SEXP, SEXP icoef_SEXP, SEXP gsize_SEXP, SEXP pen_SEXP, SEXP lambdaseq_SEXP, SEXP user_lambdaseq_SEXP, SEXP pathLength_SEXP, SEXP lambdaMinRatio_SEXP, SEXP pi_SEXP, SEXP maxit_SEXP, SEXP tol_SEXP, SEXP inner_tol_SEXP, SEXP useStrongSet_SEXP, SEXP verbose_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP& >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type z_(z_SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type icoef_(icoef_SEXP);
    Rcpp::traits::input_parameter< Eigen::ArrayXd& >::type gsize_(gsize_SEXP);
    Rcpp::traits::input_parameter< Eigen::ArrayXd& >::type pen_(pen_SEXP);
    Rcpp::traits::input_parameter< Eigen::ArrayXd& >::type lambdaseq_(lambdaseq_SEXP);
    Rcpp::traits::input_parameter< bool >::type user_lambdaseq_(user_lambdaseq_SEXP);
    Rcpp::traits::input_parameter< int >::type pathLength_(pathLength_SEXP);
    Rcpp::traits::input_parameter< double >::type lambdaMinRatio_(lambdaMinRatio_SEXP);
    Rcpp::traits::input_parameter< double >::type pi_(pi_SEXP);
    Rcpp::traits::input_parameter< int >::type maxit_(maxit_SEXP);
    Rcpp::traits::input_parameter< double >::type tol_(tol_SEXP);
    Rcpp::traits::input_parameter< double >::type inner_tol_(inner_tol_SEXP);
    Rcpp::traits::input_parameter< bool >::type useStrongSet_(useStrongSet_SEXP);
    Rcpp::traits::input_parameter< bool >::type verbose_(verbose_SEXP);
    rcpp_result_gen = Rcpp::wrap(LU_big_cpp(X_, z_, icoef_, gsize_, pen_, lambdaseq_, user_lambdaseq_, pathLength_, lambdaMinRatio_, pi_, maxit_, tol_, inner_tol_, useStrongSet_, verbose_));
    return rcpp_result_gen;
END_RCPP
}
// deviances_cpp
Eigen::MatrixXd deviances_cpp(Eigen::MatrixXd& coefMat_, SEXP& X_, Eigen::VectorXd& z_, double pi_, bool isSparse);
RcppExport SEXP _PUlasso_deviances_cpp(SEXP coefMat_SEXP, SEXP X_SEXP, SEXP z_SEXP, SEXP pi_SEXP, SEXP isSparseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type coefMat_(coefMat_SEXP);
    Rcpp::traits::input_parameter< SEXP& >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type z_(z_SEXP);
    Rcpp::traits::input_parameter< double >::type pi_(pi_SEXP);
    Rcpp::traits::input_parameter< bool >::type isSparse(isSparseSEXP);
    rcpp_result_gen = Rcpp::wrap(deviances_cpp(coefMat_, X_, z_, pi_, isSparse));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_PUlasso_BigColSums2", (DL_FUNC) &_PUlasso_BigColSums2, 1},
    {"_PUlasso_LU_cpp", (DL_FUNC) &_PUlasso_LU_cpp, 16},
    {"_PUlasso_cv_LU_cpp", (DL_FUNC) &_PUlasso_cv_LU_cpp, 19},
    {"_PUlasso_LU_big_cpp", (DL_FUNC) &_PUlasso_LU_big_cpp, 15},
    {"_PUlasso_deviances_cpp", (DL_FUNC) &_PUlasso_deviances_cpp, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_PUlasso(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
