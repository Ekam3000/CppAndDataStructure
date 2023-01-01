/*
1. declaration
2. headers/ namespace
3. important functions (two functions that makes it different from other d.s)
  first function
  find_by_order(k)-> return the iterator to kth largest element(start from 0) O(logn).
   the elements are placed in an increasing order. so indirectly the function returns the value placed at inkex k.
  second function
  order_of_key(k) ->
  returns the number of element in the set which are strictly less than our value. O(logn). the index of k in the current set is x say. so it will return me the x number of elements.
  if the value is not present in the set, then it will points to the upper bound of the k . and will return x saying x  number of elements are smaller then k

   so by using these functions we can find the kth largest element and order of key.


4. code
5. windows/ubantu
6. codeforces question , counting inversion question
*/
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// Including tree_order_ststistics_node_update
using namespace __gnu_pbds;
// declaration of the tree-based container
template <
// key type
    typename key, // it can be int, pair,pair of strings
// mapped-policy
    typename Mapped, //if u use the NULL type policy , then u r using a Set i.e no duplicates


    // key comparison functor
    typename Cmp_Fn = std::less<key>, // how do u want to compare the keys
// there are other comparison function also less_equal ,greater

    // specifies which underlying data structure to use
    typename Tag = rb_tree_tag,// how do i want my container to function like ..like here i want like rb_tree_tag


    template <
        typename Const_node_Iterator,
        typename Node_Iterator,
        typename Cmp_Fn_,
        typename Allocator_>
// a policy for updating node invariants
    class Node_Update = null_node_update, // imp part of data structure policy

    // an allocator type
    typename Allocator = std ::allocator<char>> // imp part of data structure policy

class tree;
    //typedef tree<key, Mapped,Cmp_Fn,Tag,Node_update>
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
// i have defined this whole typedef as new_data_set
    new_data_set;
   

Tree Structures
rb_tree_tag      (red-Black tree)
splay_tree_tag   (splay tree)
ov_tree_tag      (ordered - vector tree)

Final Declaration that we will use
typedef tree <
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update >
ordered_set;
