class Solution {
public:
    string defangIPaddr(string address) {
        int len = address.size();
        string newStr = "[.]"; 
        for(int i=0; i<len; i++) {
            if(address[i] == '.') {
                address.replace(i, 1, newStr);
                i +=3; len +=2;
            }
        }
        return address;
    }
};