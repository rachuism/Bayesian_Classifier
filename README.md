# **Bayesian Classifier**

![3-lane](/Images/3-lane.png)

## Goals

Predict the behaviour of the vehicles on a highway. 
Each coordinate contains 4 features:

## Data provided

s: Lenght of the road. <br />
d: Distance to the lane line. <br />
s_dot: Velocity along the s axle. <br />
d_dot: Velocity along the d axle. <br />

There are two main function: 

train(self, data, labels): Training a Gaussian Naive Bayes classifier consists of computing and storing the mean and standard deviation from the data for each label/feature pair. 
It is also useful to computer the Prior Probability for each label, counting the number of times each label shows up. 

predict(self, observation): Given a new data point, prediction requires two steps: 


1. Compute conditional probabilities for each feature/label combination.

![Cond-prob](/Images/Cond_probab.png)

2. Use the conditional probabilities in a Naive Bayes classifier.

![argmax](/Images/argmax.png)

In this formula, the argmax is taken over all possible labels C_k
and the product is taken over all features x_i with values v_i.


