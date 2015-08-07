/*This code was automatically generated by MakeNewtonTheta.py*/

#include "datatypes/allele.h"
#include "datatypes/quartet.h"
#include "typedef.h"
#include <math.h>

inline real_t H0 (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return (-2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m) + 2.0*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-F*h + F*(-h + 1.0) + 2.0*pow(h, 1.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-F*h + F*(-h + 1.0) - 2.0*pow(-h + 1, 1.0)))/(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)))
;
}

inline real_t H1 (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return (2.0*E*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/e - M*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/(-e + 1.0) + 2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/(-0.333333333333333*e + 0.5) - m*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/(-e + 1.0) + 3.0*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/e + 3.0*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/e)/(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)))
;
}

inline real_t H2 (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return (-2.0*h*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + h*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-h + 1.0) + h*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-h + 1.0))/(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)))
;
}

inline real_t J00 (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return (-4.0*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m) + pow(0.333333333333333*e, E + M)*(-2*F + 2.0)*pow(-e + 1.0, m) + pow(0.333333333333333*e, E + m)*(-2*F + 2.0)*pow(-e + 1.0, M))/(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))) + (-2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m) + 2.0*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-F*h + F*(-h + 1.0) + 2.0*pow(h, 1.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-F*h + F*(-h + 1.0) - 2.0*pow(-h + 1, 1.0)))*(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m) - 2.0*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) - pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-F*h + F*(-h + 1.0) + 2.0*pow(h, 1.0)) - pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-F*h + F*(-h + 1.0) - 2.0*pow(-h + 1, 1.0)))/pow(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)), 2)
;
}

inline real_t J01 (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return (-2.0*E*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)/e + 2.0*E*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/e - M*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-F*h + F*(-h + 1.0) - 2.0*pow(-h + 1, 1.0))/(-e + 1.0) - 2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)/(-0.333333333333333*e + 0.5) - m*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-F*h + F*(-h + 1.0) + 2.0*pow(h, 1.0))/(-e + 1.0) + 2.0*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/(-0.333333333333333*e + 0.5) + 3.0*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(-F*h + F*(-h + 1.0) + 2.0*pow(h, 1.0))/e + 3.0*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(-F*h + F*(-h + 1.0) - 2.0*pow(-h + 1, 1.0))/e)/(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))) + (-2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m) + 2.0*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-F*h + F*(-h + 1.0) + 2.0*pow(h, 1.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-F*h + F*(-h + 1.0) - 2.0*pow(-h + 1, 1.0)))*(-2.0*E*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/e + M*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/(-e + 1.0) - 2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/(-0.333333333333333*e + 0.5) + m*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/(-e + 1.0) - 3.0*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/e - 3.0*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/e)/pow(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)), 2)
;
}

inline real_t J02 (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return (2.0*h*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) - h*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-h + 1.0) - h*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-h + 1.0))*(-2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m) + 2.0*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-F*h + F*(-h + 1.0) + 2.0*pow(h, 1.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-F*h + F*(-h + 1.0) - 2.0*pow(-h + 1, 1.0)))/pow(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)), 2) + (2.0*h*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m) - 2.0*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-2*h + 1.0) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-2*h + 1.0))/(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)))
;
}

inline real_t J10 (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return (-2.0*E*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)/e + 2.0*E*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/e - M*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-F*h + F*(-h + 1.0) - 2.0*pow(-h + 1, 1.0))/(-e + 1.0) - 2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)/(-0.333333333333333*e + 0.5) - m*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-F*h + F*(-h + 1.0) + 2.0*pow(h, 1.0))/(-e + 1.0) + 2.0*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/(-0.333333333333333*e + 0.5) + 3.0*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(-F*h + F*(-h + 1.0) + 2.0*pow(h, 1.0))/e + 3.0*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(-F*h + F*(-h + 1.0) - 2.0*pow(-h + 1, 1.0))/e)/(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))) + (2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m) - 2.0*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) - pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-F*h + F*(-h + 1.0) + 2.0*pow(h, 1.0)) - pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-F*h + F*(-h + 1.0) - 2.0*pow(-h + 1, 1.0)))*(2.0*E*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/e - M*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/(-e + 1.0) + 2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/(-0.333333333333333*e + 0.5) - m*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/(-e + 1.0) + 3.0*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/e + 3.0*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/e)/pow(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)), 2)
;
}

inline real_t J11 (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return (2.0*pow(E, 2)*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/pow(e, 2) + 4.0*E*h*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/(e*(-0.333333333333333*e + 0.5)) - 2.0*E*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/pow(e, 2) + pow(M, 2)*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/pow(-e + 1.0, 2) - M*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/pow(-e + 1.0, 2) - 6.0*M*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/(e*(-e + 1.0)) + 2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*M - 0.333333333333333*m, 2)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/pow(-0.333333333333333*e + 0.5, 2) + 0.666666666666667*h*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/pow(-0.333333333333333*e + 0.5, 2) + pow(m, 2)*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/pow(-e + 1.0, 2) - m*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/pow(-e + 1.0, 2) - 6.0*m*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/(e*(-e + 1.0)) + 9.0*pow(0.333333333333333*e, E + M)*pow(0.333333333333333*E + 0.333333333333333*M, 2)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/pow(e, 2) - 3.0*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/pow(e, 2) + 9.0*pow(0.333333333333333*e, E + m)*pow(0.333333333333333*E + 0.333333333333333*m, 2)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/pow(e, 2) - 3.0*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/pow(e, 2))/(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))) + (-2.0*E*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/e + M*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/(-e + 1.0) - 2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/(-0.333333333333333*e + 0.5) + m*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/(-e + 1.0) - 3.0*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/e - 3.0*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/e)*(2.0*E*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/e - M*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/(-e + 1.0) + 2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/(-0.333333333333333*e + 0.5) - m*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/(-e + 1.0) + 3.0*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/e + 3.0*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/e)/pow(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)), 2)
;
}

inline real_t J12 (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return (2.0*h*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) - h*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-h + 1.0) - h*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-h + 1.0))*(2.0*E*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/e - M*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/(-e + 1.0) + 2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/(-0.333333333333333*e + 0.5) - m*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/(-e + 1.0) + 3.0*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/e + 3.0*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/e)/pow(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)), 2) + (-2.0*E*h*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/e - M*h*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-h + 1.0)/(-e + 1.0) - h*m*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-h + 1.0)/(-e + 1.0) - 2.0*h*pow(0.333333333333333*e, E)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/(-0.333333333333333*e + 0.5) + 3.0*h*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(-h + 1.0)/e + 3.0*h*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(-h + 1.0)/e)/(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)))
;
}

inline real_t J20 (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return (-2.0*h*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + h*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-h + 1.0) + h*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-h + 1.0))*(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m) - 2.0*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) - pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-F*h + F*(-h + 1.0) + 2.0*pow(h, 1.0)) - pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-F*h + F*(-h + 1.0) - 2.0*pow(-h + 1, 1.0)))/pow(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)), 2) + (2.0*h*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m) - h*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m) - h*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M) - 2.0*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-h + 1.0) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-h + 1.0))/(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)))
;
}

inline real_t J21 (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return (-2.0*h*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + h*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-h + 1.0) + h*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-h + 1.0))*(-2.0*E*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/e + M*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/(-e + 1.0) - 2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/(-0.333333333333333*e + 0.5) + m*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/(-e + 1.0) - 3.0*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0))/e - 3.0*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0))/e)/pow(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)), 2) + (-2.0*E*h*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/e - M*h*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-h + 1.0)/(-e + 1.0) - h*m*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-h + 1.0)/(-e + 1.0) - 2.0*h*pow(0.333333333333333*e, E)*(-0.333333333333333*M - 0.333333333333333*m)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0)/(-0.333333333333333*e + 0.5) + 3.0*h*pow(0.333333333333333*e, E + M)*(0.333333333333333*E + 0.333333333333333*M)*pow(-e + 1.0, m)*(-h + 1.0)/e + 3.0*h*pow(0.333333333333333*e, E + m)*(0.333333333333333*E + 0.333333333333333*m)*pow(-e + 1.0, M)*(-h + 1.0)/e)/(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)))
;
}

inline real_t J22 (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return (-2.0*h*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + h*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-h + 1.0) + h*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-h + 1.0))*(2.0*h*pow(0.333333333333333*e, E)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) - h*pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-h + 1.0) - h*pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-h + 1.0))/pow(2.0*h*pow(0.333333333333333*e, E)*(-F + 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(-h + 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(F*h*(-h + 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(F*h*(-h + 1.0) + pow(-h + 1, 2.0)), 2)
;
}

inline real_t lnL_NR (const quartet_t &q, const allele_t &a) {
	const real_t M=q.base[get_major(a)];		//count_t of the number of reads of the major allele.
	const real_t m=q.base[get_minor(a)];		//count_t of the number of reads of the minor allele
	const real_t E=q.base[get_error1(a)]+q.base[get_error2(a)];	//count_t of the number of reads of niether major nor minor

	const real_t h=get_freq(a);				//frequency of the major allele
	const real_t e=a.error;				//
	const real_t F=get_f(a);					//F statistic
	return log(2.0*h*pow(0.333333333333333*e, E)*(F - 1.0)*pow(-0.333333333333333*e + 0.5, M + m)*(h - 1.0) + pow(0.333333333333333*e, E + M)*pow(-e + 1.0, m)*(-F*h*(h - 1.0) + pow(h, 2.0)) + pow(0.333333333333333*e, E + m)*pow(-e + 1.0, M)*(-F*h*(h - 1.0) + pow(-h + 1, 2.0)))
;
}
