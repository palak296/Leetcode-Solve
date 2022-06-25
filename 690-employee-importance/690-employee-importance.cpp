/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int n=0;
        for(auto& i:employees)
        {
            if(i->id==id)
            {
                n=i->importance;
                 if(!i->subordinates.empty()){
                for(auto& s : i->subordinates){
                        n += getImportance(employees, s);
                    }
                 }
                return n;
            }
                
        }
        return n;
    }
};