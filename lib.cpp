#include "lib.h"
bool primo (int n){
    if (n>1){
        for (int i = n-1; i >1 ; --i) {
            if((n%i)==0)
                return false;
        }
        return true;
    }
    return false;
}
