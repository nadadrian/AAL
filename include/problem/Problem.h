//
// Created by adrian on 17.01.2020.
//

#ifndef AAL_PROBLEM_H
#define AAL_PROBLEM_H

template <class K>
class Problem {
protected:
    K* subject;
public:
    K* getSubject();
    void setSubject(K* subject);
};

template<class K>
K* Problem<K>::getSubject() {
    return this->subject;
}

template<class K>
void Problem<K>::setSubject(K *subject) {
    this->subject = subject;
}


#endif //AAL_PROBLEM_H
