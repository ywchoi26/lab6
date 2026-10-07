#pragma once
#include "student.h"

//1의 본인이름학번의 네임스페이스 안에 클래스2를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 

namespace ywchoi2649052
{
    class studentStatus
    {
    // private 멤버변수 선언: 클래스1형 객체, 그 외 멤버변수 1개 이상
        student s;
        bool status;

    public:
    //public 멤버함수 인라인으로 정의
    // -생성자: 모든 멤버변수 초기화, 기본값 설정
    // -print: 표준스트림출력으로 멤버변수들 출력
    // -클래스1형 객체의 접근함수를 참조형식으로 구현
        studentStatus(student s0 = student{1234567, 0, 'F'}, bool sts = false)
            :s{s0}, status{sts}
        {}
    
    void print() const //studentStatus::print()
    {
        s.print(); //student::print()
        if(status) std::cout << "on school\n"; //true면 실행
        else std::cout << "NOT on school\n";
    }

    const student& getStudent() const {return s;}
    void setStudent(const student& s0) {s = s0;}

    }; //세미콜론 중요
}