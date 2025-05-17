#include<iostream>
#include<algorithm>
using namespace std;
struct Activitiy {
   int start, end;
};
bool comp(Activitiy act1, Activitiy act2) {
   return (act1.end < act2.end);
}
void maxActivity(Activitiy act[], int n) {
   sort(act, act+n, comp); 
   cout << "Selected Activities are: " << endl;
   int i = 0;
   cout << "Activity: " << i << ", {" <<act[i].start << " , " << act[i].end << "}" <<endl;

   for (int j = 1; j < n; j++) { 
      if (act[j].start >= act[i].end) { 
         cout << "Activity: " << j << ", {" <<act[j].start << " , " << act[j].end <<"}"<<endl;
         i = j;
      }
   }
}
int main() {
   Activitiy arr[] = {{1,4},{3,5},{0,6},{5,7},{3,8},{5,9},{6,10},{8,11},{8,12},{2,13},{12,14}};
   int n = sizeof(arr)/sizeof(arr[0]); 
   maxActivity(arr,n);
   return 0;
}