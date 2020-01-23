//
// Created by adrian on 17.01.2020.
//

#ifndef AAL_PROBLEM_H
#define AAL_PROBLEM_H

template<class K>
class Problem {
protected:
    K *subject;
public:
    virtual ~Problem() = default;

    K *getSubject();

    void setSubject(K *subject);

    virtual bool isNotResolvable() = 0;
};

template<class K>
K *Problem<K>::getSubject() {
    return this->subject;
}

template<class K>
void Problem<K>::setSubject(K *subject) {
    this->subject = subject;
}


#endif //AAL_PROBLEM_H
