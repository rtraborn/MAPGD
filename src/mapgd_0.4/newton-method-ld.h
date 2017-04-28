/*This code was automatically generated by extras/automatic_src/make_tangent_ld.py*/

#include "population.h"
#include "typedef.h"

inline float_t H0 (const Population &P1, const Population &P2, const float_t &D) {
	float_t sum=0;
	float_t Q1=P1.m;
	float_t Q2=P2.m;
	float_t f=(P1.f+P2.f)/2.;
	int p_size=P1.likelihoods.size();
	for (int x=0; x<p_size; ++x) {
		float_t lMM1=P1.likelihoods[x].lMM;
		float_t lMm1=P1.likelihoods[x].lMm;
		float_t lmm1=P1.likelihoods[x].lmm;
		float_t lMM2=P2.likelihoods[x].lMM;
		float_t lMm2=P2.likelihoods[x].lMm;
		float_t lmm2=P2.likelihoods[x].lmm;
		if (P1.likelihoods[x].N > 0 and P2. likelihoods[x].N > 0){
		sum+=((-2*D + 2*Q1*(-Q2 + 1.0))*exp(-lMm2 - lmm1) + (-2*D + 2*Q2*(-Q1 + 1.0))*exp(-lMM1 - lMm2) + (-2*D + 2*Q2*(-Q1 + 1.0))*exp(-lMm1 - lmm2) + 2*(-D + Q1*(-Q2 + 1.0))*exp(-lMM2 - lMm1) - 2*(D + Q1*Q2)*exp(-lMm1 - lmm2) - 2*(D + Q1*Q2)*exp(-lMm2 - lmm1) - 2*(D + (-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM1 - lMm2) + (2*D + 2*Q1*Q2)*exp(-lmm1 - lmm2) + (2*D - 2*Q1*(-Q2 + 1.0))*exp(-lMM2 - lmm1) + (2*D - 2*Q2*(-Q1 + 1.0))*exp(-lMM1 - lmm2) + (2*D + 2*(-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM1 - lMM2) - (2*D + 2*(-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM2 - lMm1) + (8*D + 2*Q1*Q2 - 2*Q1*(-Q2 + 1.0) - 2*Q2*(-Q1 + 1.0) + 2*(-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMm1 - lMm2))/((-2*D + 2*Q1*(-Q2 + 1.0))*(D + Q1*Q2)*exp(-lMm2 - lmm1) + (-2*D + 2*Q2*(-Q1 + 1.0))*(D + Q1*Q2)*exp(-lMm1 - lmm2) + (-2*D + 2*Q2*(-Q1 + 1.0))*(D + (-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM1 - lMm2) + pow(-D + Q1*(-Q2 + 1.0), 2)*exp(-lMM2 - lmm1) + (-D + Q1*(-Q2 + 1.0))*(2*D + 2*(-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM2 - lMm1) + pow(-D + Q2*(-Q1 + 1.0), 2)*exp(-lMM1 - lmm2) + pow(D + Q1*Q2, 2)*exp(-lmm1 - lmm2) + pow(D + (-Q1 + 1.0)*(-Q2 + 1.0), 2)*exp(-lMM1 - lMM2) + ((-2*D + 2*Q1*(-Q2 + 1.0))*(-D + Q2*(-Q1 + 1.0)) + (D + Q1*Q2)*(2*D + 2*(-Q1 + 1.0)*(-Q2 + 1.0)))*exp(-lMm1 - lMm2))
	;}
	}
	return sum;
}

inline float_t J00 (const Population &P1, const Population &P2, const float_t &D) {
	float_t sum=0;
	float_t Q1=P1.m;
	float_t Q2=P2.m;
	float_t f=(P1.f+P2.f)/2.;
	int p_size=P1.likelihoods.size();
	for (int x=0; x<p_size; ++x) {
		float_t lMM1=P1.likelihoods[x].lMM;
		float_t lMm1=P1.likelihoods[x].lMm;
		float_t lmm1=P1.likelihoods[x].lmm;
		float_t lMM2=P2.likelihoods[x].lMM;
		float_t lMm2=P2.likelihoods[x].lMm;
		float_t lmm2=P2.likelihoods[x].lmm;
		if (P1.likelihoods[x].N > 0 and P2. likelihoods[x].N > 0){
		sum+=(2*exp(-lMM1 - lMM2) - 4*exp(-lMM1 - lMm2) + 2*exp(-lMM1 - lmm2) - 4*exp(-lMM2 - lMm1) + 2*exp(-lMM2 - lmm1) + 8*exp(-lMm1 - lMm2) - 4*exp(-lMm1 - lmm2) - 4*exp(-lMm2 - lmm1) + 2*exp(-lmm1 - lmm2))/((-2*D + 2*Q1*(-Q2 + 1.0))*(D + Q1*Q2)*exp(-lMm2 - lmm1) + (-2*D + 2*Q2*(-Q1 + 1.0))*(D + Q1*Q2)*exp(-lMm1 - lmm2) + (-2*D + 2*Q2*(-Q1 + 1.0))*(D + (-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM1 - lMm2) + pow(-D + Q1*(-Q2 + 1.0), 2)*exp(-lMM2 - lmm1) + (-D + Q1*(-Q2 + 1.0))*(2*D + 2*(-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM2 - lMm1) + pow(-D + Q2*(-Q1 + 1.0), 2)*exp(-lMM1 - lmm2) + pow(D + Q1*Q2, 2)*exp(-lmm1 - lmm2) + pow(D + (-Q1 + 1.0)*(-Q2 + 1.0), 2)*exp(-lMM1 - lMM2) + ((-2*D + 2*Q1*(-Q2 + 1.0))*(-D + Q2*(-Q1 + 1.0)) + (D + Q1*Q2)*(2*D + 2*(-Q1 + 1.0)*(-Q2 + 1.0)))*exp(-lMm1 - lMm2)) + (-(-2*D + 2*Q1*(-Q2 + 1.0))*exp(-lMm2 - lmm1) - (-2*D + 2*Q2*(-Q1 + 1.0))*exp(-lMM1 - lMm2) - (-2*D + 2*Q2*(-Q1 + 1.0))*exp(-lMm1 - lmm2) - 2*(-D + Q1*(-Q2 + 1.0))*exp(-lMM2 - lMm1) + 2*(D + Q1*Q2)*exp(-lMm1 - lmm2) + 2*(D + Q1*Q2)*exp(-lMm2 - lmm1) + 2*(D + (-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM1 - lMm2) - (2*D + 2*Q1*Q2)*exp(-lmm1 - lmm2) - (2*D - 2*Q1*(-Q2 + 1.0))*exp(-lMM2 - lmm1) - (2*D - 2*Q2*(-Q1 + 1.0))*exp(-lMM1 - lmm2) - (2*D + 2*(-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM1 - lMM2) + (2*D + 2*(-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM2 - lMm1) - (8*D + 2*Q1*Q2 - 2*Q1*(-Q2 + 1.0) - 2*Q2*(-Q1 + 1.0) + 2*(-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMm1 - lMm2))*((-2*D + 2*Q1*(-Q2 + 1.0))*exp(-lMm2 - lmm1) + (-2*D + 2*Q2*(-Q1 + 1.0))*exp(-lMM1 - lMm2) + (-2*D + 2*Q2*(-Q1 + 1.0))*exp(-lMm1 - lmm2) + 2*(-D + Q1*(-Q2 + 1.0))*exp(-lMM2 - lMm1) - 2*(D + Q1*Q2)*exp(-lMm1 - lmm2) - 2*(D + Q1*Q2)*exp(-lMm2 - lmm1) - 2*(D + (-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM1 - lMm2) + (2*D + 2*Q1*Q2)*exp(-lmm1 - lmm2) + (2*D - 2*Q1*(-Q2 + 1.0))*exp(-lMM2 - lmm1) + (2*D - 2*Q2*(-Q1 + 1.0))*exp(-lMM1 - lmm2) + (2*D + 2*(-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM1 - lMM2) - (2*D + 2*(-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM2 - lMm1) + (8*D + 2*Q1*Q2 - 2*Q1*(-Q2 + 1.0) - 2*Q2*(-Q1 + 1.0) + 2*(-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMm1 - lMm2))/pow((-2*D + 2*Q1*(-Q2 + 1.0))*(D + Q1*Q2)*exp(-lMm2 - lmm1) + (-2*D + 2*Q2*(-Q1 + 1.0))*(D + Q1*Q2)*exp(-lMm1 - lmm2) + (-2*D + 2*Q2*(-Q1 + 1.0))*(D + (-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM1 - lMm2) + pow(-D + Q1*(-Q2 + 1.0), 2)*exp(-lMM2 - lmm1) + (-D + Q1*(-Q2 + 1.0))*(2*D + 2*(-Q1 + 1.0)*(-Q2 + 1.0))*exp(-lMM2 - lMm1) + pow(-D + Q2*(-Q1 + 1.0), 2)*exp(-lMM1 - lmm2) + pow(D + Q1*Q2, 2)*exp(-lmm1 - lmm2) + pow(D + (-Q1 + 1.0)*(-Q2 + 1.0), 2)*exp(-lMM1 - lMM2) + ((-2*D + 2*Q1*(-Q2 + 1.0))*(-D + Q2*(-Q1 + 1.0)) + (D + Q1*Q2)*(2*D + 2*(-Q1 + 1.0)*(-Q2 + 1.0)))*exp(-lMm1 - lMm2), 2)
	;}
	}
	return sum;
}

inline float_t lnL_NR (const Population &P1, const Population &P2, const float_t &D) {
	float_t sum=0;
	float_t Q1=P1.m;
	float_t Q2=P2.m;
	float_t f=(P1.f+P2.f)/2.;
	int p_size=P1.likelihoods.size();
	for (int x=0; x<p_size; ++x) {
		float_t lMM1=P1.likelihoods[x].lMM;
		float_t lMm1=P1.likelihoods[x].lMm;
		float_t lmm1=P1.likelihoods[x].lmm;
		float_t lMM2=P2.likelihoods[x].lMM;
		float_t lMm2=P2.likelihoods[x].lMm;
		float_t lmm2=P2.likelihoods[x].lmm;
		if (P1.likelihoods[x].N > 0 and P2. likelihoods[x].N > 0){
		sum+=log(pow(D + Q1*Q2, 2)*exp(-lmm1 - lmm2) - 2*(D + Q1*Q2)*(D + Q1*(Q2 - 1.0))*exp(-lMm2 - lmm1) - 2*(D + Q1*Q2)*(D + Q2*(Q1 - 1.0))*exp(-lMm1 - lmm2) + pow(D + Q1*(Q2 - 1.0), 2)*exp(-lMM2 - lmm1) - 2*(D + Q1*(Q2 - 1.0))*(D + (Q1 - 1.0)*(Q2 - 1.0))*exp(-lMM2 - lMm1) + pow(D + Q2*(Q1 - 1.0), 2)*exp(-lMM1 - lmm2) - 2*(D + Q2*(Q1 - 1.0))*(D + (Q1 - 1.0)*(Q2 - 1.0))*exp(-lMM1 - lMm2) + pow(D + (Q1 - 1.0)*(Q2 - 1.0), 2)*exp(-lMM1 - lMM2) + 2*((D + Q1*Q2)*(D + (Q1 - 1.0)*(Q2 - 1.0)) + (D + Q1*(Q2 - 1.0))*(D + Q2*(Q1 - 1.0)))*exp(-lMm1 - lMm2))
	;}
	}
	return sum;
}
