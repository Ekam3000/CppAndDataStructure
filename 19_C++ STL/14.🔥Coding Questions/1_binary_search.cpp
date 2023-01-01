// binary search is appied on monotonic functions (array is one of the momotonic function). but not only array is not the monotonic function .. so binary search can be appied on other DS other than array.

 // suppose have to find square root of a number using binary search.example square root of 48. here there is no array concept. so here root(N) is the monotonic function. binary search search on search space.

// 0 is the minimum search space (the minimun square root of 48)  and 48 is the maximum search space (the maximum square root of 48) yaa phir hum n/2 bhi le sakte hai max search space ko.

// 0 and 48 ka mid liya 24 aaya , now 24*24 >48 , so end pt 24-1 aa gya. so range ab [0,23] ho gyi.
 
 // .. 5*5 <48 .. mid pt of 5 and 10 if 7 ,7*7 >48 .. mid pt of 5 and 7 is 6. .. 6*6 <48
 // so search space converged to 6

//Binary search is a widely used searching algorithm that requires the array to be sorted before search is applied. 

//binary_search(startaddress,endaddress, valuetofind)
