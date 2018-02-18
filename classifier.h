#ifndef CLASSIFIER_H
#define CLASSIFIER_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <math.h>
#include <vector>

using namespace std;

class GNB {
public:

	vector<string> possible_labels = {"left","keep","right"};
    double s_left_mu;
    double d_left_mu;
    double s_dot_left_mu;
    double d_dot_left_mu;
    
    double s_keep_mu;
    double d_keep_mu;
    double s_dot_keep_mu;
    double d_dot_keep_mu;
    
    double s_right_mu;
    double d_right_mu;
    double s_dot_right_mu;
    double d_dot_right_mu;
    
    double s_left_std;
    double d_left_std;
    double s_dot_left_std;
    double d_dot_left_std;
    
    double s_keep_std;
    double d_keep_std;
    double s_dot_keep_std;
    double d_dot_keep_std;
    
    double s_right_std;
    double d_right_std;
    double s_dot_right_std;
    double d_dot_right_std;
    
    double prob_left;
    double prob_keep;
    double prob_right;
    
    double n_left;
    double n_keep;
    double n_right;
    
    double poss_left;
    double poss_keep;
    double poss_right;

    double prob_s_left;
    double prob_d_left;
    double prob_s_dot_left;
    double prob_d_dot_left;
    
    double prob_s_keep;
    double prob_d_keep;
    double prob_s_dot_keep;
    double prob_d_dot_keep;
    
    double prob_s_right;
    double prob_d_right;
    double prob_s_dot_right;
    double prob_d_dot_right;
    
    int choice;
	/**
  	* Constructor
  	*/
 	GNB();

	/**
 	* Destructor
 	*/
 	virtual ~GNB();

 	void train(vector<vector<double> > data, vector<string>  labels);

  	string predict(vector<double>);

};

#endif



